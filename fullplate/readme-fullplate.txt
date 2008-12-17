Full Plate and Packing Steel

Beta 4, Nov 2008

Between You And Harm: Armour System Rework for BG2 and IWD

AD&D's armour system never made sense to me. Characters as
agile and sprightly in full plate as in light leather armour.
Heavy armour not helping one bit if a goblin happens to roll
a 20 hitting you in the chest with a bent butterknife. You
get hurt just as bad as the random unarmoured commoner.

And in BG2, AC simply isn't effective after a while. Opponents
autohit you and you them, because of AC not keeping pace with
THAC0 and pluses to hit and whatnot accumulating.

Enter this rework. Light, enchanted armours actually help you
dodge and take a bit of the sting out. Heavy, enchanted armours
don't help dodging much. But they absorb perhaps half or more of
the blow in exchange for slowing you down.

Stealth, thieving and casting in heavy armour is possible,
but difficult.

Heavy armour has quite another feel now. Enjoy.

Do read the updated descriptions. They are informative.

HOW/TOTLM note: The (x amount resisted) feedback text does not
 seem to be accurate all the time. Strangeness abounds. But it
 all seems to work correctly.


Little He Knows Where a Foe May Lurk:

Everyone can backstab at x2, thieves/assassins/stalkers do better.
Only weapons a single-class thief can use are eligible for backstab,
as usual.


Thanks to:
 Westley Weimer and the Bigg, for WeiDU
 Avenger, for DLTCEP
 the Bigg and the Refinements team, for inspiration
 Gibberlings3, for the friendly atmosphere
 Kulyok, for IWD scripting inspiration
 various Pen & Paper roleplaying games, for inspiration


Incompatible with:
 Refinements' Revised Armors & Shields
 BG2 Tweaks' Allow Thieving and Stealth in Heavy Armor
 IWD Tweaks' Allow Thieving and Stealth in Heavy Armor
 Item Revisions' Heavy Armor Encumbrance
 Item Revisions' Allow Thieving Skills in Armor

Install order:
 As close to last as you can manage. After anything adding
 armours to the game. Definitely after Spell Revisions,
 Item Revisions, Galactygon's Spell Pack beta.

License:
 Creative Commons Attribution 3.0 Unported (http://creativecommons.org/licenses/by/3.0/)
  ... essentially, mention me in the readme if you grab anything. Feel free.


Touched:
 all armours
 armour spells
 items with armour effects (girdle of bluntness, etc.)
 armour potions (stone form, defense, absorption)
 shields (removes spellcasting/thieving restrictions, if any)

Untouched:
 shield spell
 bracers of defense
 rings of protection
 cloaks of protection
 amulets
 helmets
 potion of invuln.
 weapons with protective effects
 barbarian resistances
 hardiness hla

Question marks, untouched at the moment:
 mage robes
 Jansen adventurewear

Design notes

- if you have a klutz character with 6 or less DEX ... don't let him try to put on heavy armour. He'll break his neck dressing for battle.
- movement penalty purely based on weight.
- light armour:
  * padded, leather, studded, hide, elven chain, light dragonscale armours
  * enchantment improves ac quickly
  * enchantment removes weapon speed penalties quickly
  * enchantment lowers thieving penalties quickly
  * enchantment improves damage resistance slowly
  * enchantment lowers weight, move penalties and dex penalties (no sudden halving of weight for +1 armours)
  * enchantment improves spell failure slowly
- heavy armour:
  * scale, (adamantine/mithril) chain, splint, banded, plate, field plate, full plate, heavy dragonscale armours
  * enchantment improves ac slowly
  * enchantment removes weapon speed penalties slowly
  * enchantment lowers thieving penalties slowly
  * enchantment improves damage resistance quickly
  * enchantment lowers weight, move penalties and dex penalties (no sudden halving of weight for +1 armours)
  * enchantment improves spell failure slowly


Changes

beta 4
 * bugfix: armor no longer overrides natural resistances
 * install-time analysis of resistances added by items and effects, creatures
   adjusted to avoid resistant-to-everything enemies
 * added back some ac-bonuses vs weapon types (equal amount for all armor types,
   just distributed in various ways), to help icewind dale adventurers a bit
 * beefed up missile protection of heavy armours a bit
 * minor descriptionwhacking updates
 * tested with still more mods than before
 ** avoids disturbing other "casting-in-armour" mods
 ** compatibility added with Spell Revisions and Item Revisions mods
 ** compatibility added with Galactygon's Spell Pack beta 5

beta 3 (closed beta, november 2008)
 * caveat: WeiDU pre-209 beta, for proper game engine detection
 * bugfix: update scroll descriptions to match spell changes
 * bugfix: fix ac for armors with updated base ac 0
 * game-specific tweaks (same filename, different spell)
 * Icewind Dale, Heart of Winter, Trials of the Luremaster compatibility
 * improved SoA compatibility
 * added backstabbing-for-everyone component

beta 2 (closed beta, july 2008)
 * more mod items taken care of
 * shields not disabling spells/thieving anymore
 * improved descriptionwhacking
 * limit each item to max 100% resistance, not only the gametime total

beta 1 (closed beta, late may 2008)
 * quite a few!
