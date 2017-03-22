void CreateRandomPickupAroundPlayer()
{
    Random random = new Random();
    Pickup pickup = null;
    int pickupSelection = random.Next(0, 3);
    switch (pickupSelection)
    {
        case 0:
            switch (episode == GameEpisode.GTAIV ? (random.Next(0, 9)) : episode == GameEpisode.TBOGT ? (random.Next(0, 2) == 0 ? random.Next(0, 9) : random.Next(9, 18)) : (random.Next(0, 2) == 0 ? random.Next(0, 9) : random.Next(18, 23)))
            {
                case 0: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.Handgun_DesertEagle, 500); break;
                case 1: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.SMG_MP5, 500); break;
                case 2: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.Shotgun_Baretta, 500); break;
                case 3: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.Rifle_M4, 500); break;
                case 4: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.Thrown_Grenade, 500); break;
                case 5: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.Rifle_M4, 500); break;
                case 6: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.Heavy_RocketLauncher, 500); break;
                case 7: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.SniperRifle_M40A1, 500); break;
                case 8: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.Thrown_Grenade, 500); break;

                //tbogt
                case 9: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_AdvancedMG, 600); break;
                case 10: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_AdvancedSniper, 600); break;
                case 11: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_AssaultSMG, 600); break;
                case 12: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_ExplosiveShotgun, 600); break;
                case 13: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_GoldenSMG, 600); break;
                case 14: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_GrenadeLauncher, 600); break;
                case 15: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_NormalShotgun, 600); break;
                case 16: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_Pistol44, 600); break;
                case 17: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TBOGT_StickyBomb, 600); break;

                //tlad
                case 18: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TLAD_AssaultShotgun, 600); break;
                case 19: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TLAD_Automatic9mm, 600); break;
                case 20: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TLAD_GrenadeLauncher, 600); break;
                case 21: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TLAD_PipeBomb, 600); break;
                case 22: pickup = Pickup.CreateWeaponPickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), Weapon.TLAD_SawedOffShotgun, 600); break;
            }
            break;
        case 1:
            pickup = Pickup.CreatePickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), "CJ_FIRST_AID_PICKUP", PickupType.Weapon); //health
            break;
        case 2:
            pickup = Pickup.CreatePickup(Game.LocalPlayer.Character.Position.Around(random.Next(15, 25)).ToGround(), 0x972daa10, PickupType.Weapon); //Armor
            break;
    }
    if (!Game.Exists(pickup)) return;

    Blip blip = pickup.AttachBlip();
    blip.Name = pickupSelection == 0 ? "Weapon" : pickupSelection == 1 ? "Health" : "Armour";
    blip.Color = pickupSelection == 0 ? BlipColor.Orange : pickupSelection == 1 ? BlipColor.LightRed : BlipColor.Cyan;
    //pickupList.Add(pickup); pickupBlipList.Add(blip);
