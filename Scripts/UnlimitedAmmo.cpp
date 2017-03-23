/* 
   This is for GTA IV only. Downloaded Content such as TBOGT and TLAD are excluded.
  
   Should work for PC Version.
*/


void UnlimitedAmmo()
{
  Unlimited_Ammo unlimited_ammo = null;
  int UnlimitedAmmo = Weapon(weapon_kind, ammo capacity);
  switch (UnlimitedAmmo)
  {
      case 0:
          switch (episode == GameEpisode.GTAIV ? (random.Next(0, 9)) : episode == GameEpisode.TBOGT ? (random.Next(0, 2) == 0 ? random.Next(0, 9) : random.Next(9, 18)) : (random.Next(0, 2) == 0 ? random.Next(0, 9) : random.Next(18, 23)))
          {
              case 0: ammo = Ammo(Weapon.Handgun_DesertEagle, 99999999); break;
              case 1: ammo = Ammo(Weapon.SMG_MP5, 99999999); break;
              case 2: ammo = Ammo(Weapon.Shotgun_Baretta, 99999999); break;
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              
          }
          break;
          
  }
  if (!Game.Exists(unlimited_ammo)) return;
  
 
