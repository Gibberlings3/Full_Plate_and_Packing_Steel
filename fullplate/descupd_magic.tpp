// evil pseudomacro
//  if searchstring exists in description, replace replacestring with insertstring,
//  else if insertafter exists in description, splice in insertstring after it
//  else do nothing
// <<<<<<<< descupd_magic.tpp
PATCH_IF (enchantment > 0) BEGIN
   PATCH_IF ( ~%iddesc%~ STRING_CONTAINS_REGEXP ~%searchstring%~ == 0) BEGIN
     INNER_PATCH_SAVE newdescstr "%iddesc%" BEGIN
       REPLACE_EVALUATE ~%replacestring%~
         BEGIN
           SPRINT result ~%insertstring%~
         END
         ~%result%~
     END
   END ELSE BEGIN
     INNER_PATCH_SAVE newdescstr "%iddesc%" BEGIN
       REPLACE_EVALUATE ~%insertafter%~
         BEGIN
           SPRINT result  ~%MATCH1%%insertstring%~
           PATCH_IF (~%insertstring%~ STRING_EQUAL ~~ == 0) BEGIN
             SPRINT result  ~%result%%wnl%~
           END
         END
         ~%result%~
     END
   END
   SAY_EVALUATED IDENTIFIED_DESC ~%newdescstr%~
   READ_STRREF 0x54 iddesc ELSE ~nope~
END ELSE BEGIN // if enchanted
   PATCH_IF ( ~%uniddesc%~ STRING_CONTAINS_REGEXP ~%searchstring%~ == 0) BEGIN
     INNER_PATCH_SAVE newdescstr "%uniddesc%" BEGIN
       REPLACE_EVALUATE ~%replacestring%~
         BEGIN
           SPRINT result ~%insertstring%~
         END
         ~%result%~
     END
   END ELSE BEGIN
     INNER_PATCH_SAVE newdescstr "%uniddesc%" BEGIN
       REPLACE_EVALUATE ~%insertafter%~
         BEGIN
           SPRINT result  ~%MATCH1%%insertstring%~
           PATCH_IF (~%insertstring%~ STRING_EQUAL ~~ == 0) BEGIN
             SPRINT result  ~%result%%wnl%~
           END
         END
         ~%result%~
     END
   END
   SAY_EVALUATED UNIDENTIFIED_DESC ~%newdescstr%~
   READ_STRREF 0x50 uniddesc ELSE ~nope~
END // if not enchanted

