#include <stdio.h>
#include <conio.h>

void earthquake_info();
void flood_info();
void fire_info();
void Pest_Infestations();
void thunderstorm();
void tornado();
void hailstorm();
void landslide();
void emergency_kit();
int main()
{

    int choice;

    while (1)
    {
        printf("\n--- Disaster Management System ---\n");
        printf("1. Earthquake\n");
        printf("2. Flood\n");
        printf("3. Fire\n");
        printf("4. Pest Infestations\n");
        printf("5. Thunder storm\n");
        printf("6. Land Slide \n");
        printf("7. tornado\n");
        printf("8. hailstorm\n");
        printf("9. Emergency Kit Suggestion\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            earthquake_info();
            break;
        case 2:
            flood_info();
            break;
        case 3:
            fire_info();
            break;
        case 4:
            Pest_Infestations();
            break;
        case 5:
            thunderstorm();
            break;
        case 6:
            landslide();
            break;
        case 7:
            tornado();
            break;
        case 8:
            hailstorm();
            break;
        // case 9:
        //     printf("Choose a disaster type:\n1. Earthquake\n2. Flood\n3. Fire\n4. Pest Infestation\n5. Thunder storm");
        //     scanf("%d", &choice);
        //     break;
        case 9:
            emergency_kit();
            break;
        case 10:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}

void earthquake_info()
{
    const char *knowTheRisk =
        "Before an Earthquake: Be Ready\n"
        "# Know the Risk:\n"
        "  * Find out if earthquakes happen in your area.\n"
        "  * Sign up for alerts from local officials.\n";

    const char *prepareEmergencyKit =
        "# Make an Emergency Kit:\n"
        "  * Pack water, easy-to-store food, a first-aid kit, flashlights, batteries, medicine, and a phone charger.\n";

    const char *familyEmergencyPlan =
        "# Plan with Your Family:\n"
        "  * Plan how to leave your home fast if needed.\n"
        "  * Pick a safe meeting place if you get separated.\n"
        "  * Teach everyone to turn off gas and electricity.\n";

    const char *protectDocuments =
        "# Keep Important Papers Safe:\n"
        "  * Store important papers like IDs and insurance in a waterproof box or save copies online.\n";

    const char *prepareHome =
        "# Get Your Home Ready:\n"
        "  * Secure heavy furniture so it won’t fall over.\n"
        "  * Keep breakable things in low, safe spots.\n"
        "  * Make sure your home is safe enough for earthquakes.\n";

    const char *insuranceCoverage =
        "# Get Earthquake Insurance:\n"
        "  * Check if your home is covered for earthquakes, especially if you live in a risky area.\n";

    printf("%s", knowTheRisk);
    printf("%s", prepareEmergencyKit);
    printf("%s", familyEmergencyPlan);
    printf("%s", protectDocuments);
    printf("%s", prepareHome);
    printf("%s", insuranceCoverage);

    const char *stayInformed =
        "During an Earthquake: Stay Safe\n"
        "# Stay Informed:\n"
        "  * Keep listening to local news for updates.\n";

    const char *dropCoverHold =
        "# Drop, Cover, and Hold On:\n"
        "  * Get on your hands and knees so you don’t fall.\n"
        "  * Hide under sturdy furniture and protect your head.\n"
        "  * Hold on until the shaking stops.\n";

    const char *avoidHazards =
        "# Stay Away from Danger:\n"
        "  * Stay away from windows, glass, and heavy objects that could fall.\n"
        "  * Don’t use elevators during or after the earthquake.\n";

    const char *stayPut =
        "# Stay Where You Are:\n"
        "  * If you are inside, stay inside. If outside, move away from buildings and power lines.\n";

    printf("%s", stayInformed);
    printf("%s", dropCoverHold);
    printf("%s", avoidHazards);
    printf("%s", stayPut);

    const char *checkForInjuries =
        "After an Earthquake: What to Do\n"
        "# Check for Injuries:\n"
        "  * Check yourself and others for injuries. Give first aid if needed.\n";

    const char *inspectHome =
        "# Check Your Home for Damage:\n"
        "  * Look for damage, gas leaks, and electrical problems.\n"
        "  * If your home is unsafe, leave and call for help.\n";

    const char *cleanSafely =
        "# Clean Up Safely:\n"
        "  * Wear gloves and a mask when cleaning up.\n"
        "  * Watch out for sharp or dangerous objects.\n";

    const char *followGuidance =
        "# Follow Official Instructions:\n"
        "  * Listen to local officials for advice and where to get help.\n";

    printf("%s", checkForInjuries);
    printf("%s", inspectHome);
    printf("%s", cleanSafely);
    printf("%s", followGuidance);

    const char *safetyReminders =
        "Safety Tips:\n"
        "# Be Prepared:\n"
        "  * Keep your emergency kit handy and practice earthquake drills with your family.\n"
        "# Stay Informed:\n"
        "  * Use a battery radio to hear emergency updates.\n"
        "# Stay in Touch:\n"
        "  * Tell your friends and family that you're safe and where you are.\n";

    printf("%s", safetyReminders);
}

void flood_info()
{
    const char *knowTheRisk =
        "Before a Flood: Be Ready\n"
        "# Know the Risk:\n"
        "  * Find out if your area is at risk for floods.\n"
        "  * Sign up for alerts from local authorities about flood warnings.\n";

    const char *prepareEmergencyKit =
        "# Make an Emergency Kit:\n"
        "  * Pack water, non-perishable food, first-aid supplies, flashlights, batteries, medications, and a phone charger.\n";

    const char *familyEmergencyPlan =
        "# Plan with Your Family:\n"
        "  * Plan how to leave your home quickly if needed.\n"
        "  * Pick a meeting place in case family members get separated.\n"
        "  * Teach everyone how to turn off water, gas, and electricity.\n";

    const char *protectDocuments =
        "# Keep Important Papers Safe:\n"
        "  * Store important papers like IDs and insurance in a waterproof box or save copies online.\n";

    const char *prepareHome =
        "# Prepare Your Home:\n"
        "  * Move valuable items to higher places in your home.\n"
        "  * Clear drains, gutters, and downspouts to prevent flooding inside your house.\n"
        "  * Consider adding barriers like sandbags to stop water from coming in.\n";

    const char *insuranceCoverage =
        "# Get Flood Insurance:\n"
        "  * Make sure your home is covered by flood insurance, especially if you live in a flood-prone area.\n";

    printf("%s", knowTheRisk);
    printf("%s", prepareEmergencyKit);
    printf("%s", familyEmergencyPlan);
    printf("%s", protectDocuments);
    printf("%s", prepareHome);
    printf("%s", insuranceCoverage);

    const char *stayInformed =
        "During a Flood: Stay Safe\n"
        "# Stay Informed:\n"
        "  * Listen to local news for weather updates and evacuation instructions.\n";

    const char *moveToHigherGround =
        "# Move to Higher Ground:\n"
        "  * If there is a flood warning, move to higher ground immediately.\n"
        "  * Avoid walking or driving through floodwaters as they can be dangerous.\n";

    const char *avoidHazards =
        "# Avoid Dangerous Areas:\n"
        "  * Stay away from rivers, streams, and any flooded areas.\n"
        "  * Don’t touch electrical equipment if you are wet or standing in water.\n";

    const char *evacuateSafely =
        "# Evacuate Safely:\n"
        "  * If told to evacuate, do so quickly but safely. Follow the routes recommended by authorities.\n";

    printf("%s", stayInformed);
    printf("%s", moveToHigherGround);
    printf("%s", avoidHazards);
    printf("%s", evacuateSafely);

    const char *checkForInjuries =
        "After a Flood: What to Do\n"
        "# Check for Injuries:\n"
        "  * Check yourself and others for injuries. Provide first aid if needed.\n";

    const char *inspectHome =
        "# Check Your Home for Damage:\n"
        "  * Look for structural damage, gas leaks, and electrical problems.\n"
        "  * If your home is flooded, avoid entering until it's safe and authorities say it's okay.\n";

    const char *cleanSafely =
        "# Clean Up Safely:\n"
        "  * Wear gloves and waterproof boots when cleaning up.\n"
        "  * Be cautious of floodwater, as it may be contaminated or contain sharp objects.\n";

    const char *followGuidance =
        "# Follow Official Advice:\n"
        "  * Continue listening to authorities for updates on safe areas and where to get help.\n";

    printf("%s", checkForInjuries);
    printf("%s", inspectHome);
    printf("%s", cleanSafely);
    printf("%s", followGuidance);

    const char *safetyReminders =
        "Safety Tips:\n"
        "# Be Prepared:\n"
        "  * Keep your emergency kit ready and know the safest route to higher ground.\n"
        "# Stay Informed:\n"
        "  * Keep a battery-powered radio to hear emergency updates.\n"
        "# Communicate:\n"
        "  * Tell your friends and family that you're safe and where you are.\n";

    printf("%s", safetyReminders);
}

void fire_info()
{
    const char *knowTheRisk =
        "Before a Fire: Be Ready\n"
        "# Know the Risk:\n"
        "  * Learn about fire risks in your area.\n"
        "  * Sign up for fire safety alerts from local authorities.\n";

    const char *prepareEmergencyKit =
        "# Make an Emergency Kit:\n"
        "  * Pack essentials like water, non-perishable food, a first-aid kit, flashlights, batteries, and a fire extinguisher.\n";

    const char *familyEmergencyPlan =
        "# Plan with Your Family:\n"
        "  * Plan multiple escape routes from your home in case of a fire.\n"
        "  * Pick a safe meeting spot outside your home where everyone should go.\n"
        "  * Make sure everyone knows how to call the fire department and what to do in an emergency.\n";

    const char *protectDocuments =
        "# Keep Important Papers Safe:\n"
        "  * Store important papers like IDs, insurance, and medical records in a fireproof box or save copies online.\n";

    const char *prepareHome =
        "# Get Your Home Ready:\n"
        "  * Install smoke detectors in every room and check them regularly.\n"
        "  * Keep fire extinguishers in key areas like the kitchen and garage.\n"
        "  * Make sure your home has clear pathways for easy evacuation.\n";

    const char *insuranceCoverage =
        "# Get Fire Insurance:\n"
        "  * Ensure your home is covered for fire damage, especially if you live in a fire-prone area.\n";

    printf("%s", knowTheRisk);
    printf("%s", prepareEmergencyKit);
    printf("%s", familyEmergencyPlan);
    printf("%s", protectDocuments);
    printf("%s", prepareHome);
    printf("%s", insuranceCoverage);

    const char *stayInformed =
        "During a Fire: Stay Safe\n"
        "# Stay Informed:\n"
        "  * Follow instructions from local fire departments and emergency services.\n";

    const char *evacuate =
        "# Evacuate Quickly:\n"
        "  * If you smell smoke or see fire, leave your home immediately.\n"
        "  * Use the nearest safe exit, and avoid elevators.\n"
        "  * Help others evacuate, especially children and the elderly.\n";

    const char *stayLow =
        "# Stay Low to the Ground:\n"
        "  * Smoke rises, so crawl on the floor to avoid breathing in smoke.\n"
        "  * Cover your nose and mouth with a cloth to filter the air.\n";

    const char *stopDropRoll =
        "# If Your Clothes Catch Fire:\n"
        "  * Stop where you are, drop to the ground, and roll to smother the flames.\n";

    printf("%s", stayInformed);
    printf("%s", evacuate);
    printf("%s", stayLow);
    printf("%s", stopDropRoll);

    const char *checkForInjuries =
        "After a Fire: What to Do\n"
        "# Check for Injuries:\n"
        "  * Check yourself and others for burns or smoke inhalation. Call for medical help if needed.\n";

    const char *inspectHome =
        "# Check Your Home for Damage:\n"
        "  * Once the fire is out, check for damage. Do not enter the home if it's not safe.\n"
        "  * Report any damage to the authorities and your insurance company.\n";

    const char *avoidHazards =
        "# Be Careful with Hazards:\n"
        "  * Watch out for hot spots, unstable debris, and dangerous fumes after the fire is extinguished.\n";

    const char *followGuidance =
        "# Listen to Authorities:\n"
        "  * Follow local officials' advice on when it's safe to return home and how to get help.\n";

    printf("%s", checkForInjuries);
    printf("%s", inspectHome);
    printf("%s", avoidHazards);
    printf("%s", followGuidance);

    const char *safetyReminders =
        "Safety Tips:\n"
        "# Be Prepared:\n"
        "  * Practice fire drills with your family and always know two ways out of every room.\n"
        "# Stay Alert:\n"
        "  * Keep a battery-powered radio to hear emergency updates during a fire.\n"
        "# Stay in Touch:\n"
        "  * Let friends and family know you're safe and where you are after a fire.\n";

    printf("%s", safetyReminders);
}

void emergency_kit()
{
    const char *emergencyKit =
        "Emergency Kit for Natural Disasters\n"
        "# Essential Supplies:\n"
        "  * Water: At least one gallon per person per day for at least three days.\n"
        "  * Non-perishable food: Enough for at least three days (e.g., canned goods, dried fruits).\n"
        "  * Manual can opener: For food items that require it.\n"
        "  * Flashlight: With extra batteries to ensure visibility during power outages.\n"
        "  * First aid kit: Include bandages, antiseptic wipes, and necessary medications.\n"
        "  * Whistle: To signal for help if needed.\n";

    const char *personalItems =
        "# Personal Items:\n"
        "  * Important documents: Store copies of IDs, insurance policies, and medical records in a waterproof bag.\n"
        "  * Cash: Keep small bills and coins as ATMs may not be accessible.\n"
        "  * Medications: Enough supply for at least a week, including prescriptions and over-the-counter meds.\n"
        "  * Personal hygiene items: Such as soap, toothpaste, sanitary products, and wet wipes.\n";

    const char *specialNeeds =
        "# Special Needs:\n"
        "  * Supplies for infants: Baby formula, diapers, bottles, and any necessary baby items.\n"
        "  * Supplies for pets: Food, water, medications, and other necessities for pets.\n"
        "  * Tools: Include a multi-tool or basic toolkit for repairs and emergencies.\n";

    const char *communication =
        "# Communication:\n"
        "  * Battery-operated or hand-crank radio: To receive news and emergency information.\n"
        "  * Fully charged portable phone charger: To keep your phone powered during emergencies.\n"
        "  * Emergency contact list: Keep a list of family, friends, and local emergency numbers.\n";

    printf("%s", emergencyKit);
    printf("%s", personalItems);
    printf("%s", specialNeeds);
    printf("%s", communication);
    const char *safetyReminders =
        "# General Safety Reminders:\n"
        "  * Review and update your emergency kit regularly.\n"
        "  * Ensure all family members know where the emergency kit is located.\n"
        "  * Practice your emergency plan to ensure everyone knows what to do in case of a disaster.\n";
    printf("%s", safetyReminders);
}
void Pest_Infestations()
{
    const char *knowTheRisk =
        "Before a Pest Infestation: Be Prepared\n"
        "# Know the Risk:\n"
        "  * Understand which pests (like termites, rodents, or insects) are common in your area.\n"
        "  * Stay updated on local pest control alerts.\n";

    const char *preparePreventionKit =
        "# Prepare a Prevention Kit:\n"
        "  * Keep items like pest repellents, traps, sealants, gloves, and cleaning supplies ready.\n";

    const char *familyPreventionPlan =
        "# Make a Family Prevention Plan:\n"
        "  * Decide how to keep your home clean and free from food sources that attract pests.\n"
        "  * Make sure everyone knows how to use traps and repellents safely.\n"
        "  * Teach family members to spot signs of pest infestations, like droppings or chewed wires.\n";

    const char *protectFoodAndBelongings =
        "# Protect Food and Belongings:\n"
        "  * Store food in sealed containers to prevent pests from getting into it.\n"
        "  * Keep important items in airtight boxes to avoid damage from pests.\n";

    const char *sealYourHome =
        "# Seal Your Home:\n"
        "  * Block entry points like cracks, holes, and gaps around doors and windows.\n"
        "  * Fix any broken screens, and keep doors closed when not in use.\n";

    const char *regularMaintenance =
        "# Regular Maintenance:\n"
        "  * Check for leaks and moisture, as pests are attracted to damp areas.\n"
        "  * Keep your yard clean by removing trash, fallen leaves, and standing water.\n";

    printf("%s", knowTheRisk);
    printf("%s", preparePreventionKit);
    printf("%s", familyPreventionPlan);
    printf("%s", protectFoodAndBelongings);
    printf("%s", sealYourHome);
    printf("%s", regularMaintenance);

    const char *actQuickly =
        "During a Pest Infestation: Act Fast\n"
        "# Act Quickly:\n"
        "  * At the first sign of pests, set traps or use repellents to prevent the problem from spreading.\n";

    const char *limitFoodSources =
        "# Limit Food and Water Sources:\n"
        "  * Clean up any spilled food and store leftovers in sealed containers.\n"
        "  * Fix leaks to cut off water sources that pests might use.\n";

    const char *containThePests =
        "# Contain the Problem:\n"
        "  * Keep the infested area sealed off to prevent pests from spreading to other parts of your home.\n"
        "  * Throw away contaminated food or items that cannot be saved.\n";

    printf("%s", actQuickly);
    printf("%s", limitFoodSources);
    printf("%s", containThePests);

    const char *callForHelp =
        "After a Pest Infestation: What to Do\n"
        "# Call Pest Control:\n"
        "  * If the infestation is large or hard to control, call professional pest control services.\n";

    const char *cleanUp =
        "# Clean and Disinfect:\n"
        "  * Clean areas affected by pests, especially where droppings or nests were found.\n"
        "  * Disinfect the area to prevent the spread of disease.\n";

    const char *inspectForDamage =
        "# Check for Damage:\n"
        "  * Inspect your home for any damage to wiring, walls, or belongings caused by pests.\n";

    const char *preventFutureProblems =
        "# Prevent Future Infestations:\n"
        "  * Regularly inspect and clean your home to keep pests away.\n"
        "  * Use pest control measures like traps or repellents as needed.\n";

    printf("%s", callForHelp);
    printf("%s", cleanUp);
    printf("%s", inspectForDamage);
    printf("%s", preventFutureProblems);

    const char *generalTips =
        "General Pest Prevention Tips:\n"
        "# Keep Clean:\n"
        "  * Regularly clean your home, especially the kitchen, to avoid attracting pests.\n"
        "# Store Food Safely:\n"
        "  * Always store food in airtight containers.\n"
        "# Block Entry Points:\n"
        "  * Seal cracks and holes where pests can enter your home.\n";

    printf("%s", generalTips);
}

void thunderstorm()
{
    const char *knowTheRisk =
        "Before a Thunderstorm: Be Ready\n"
        "# Know the Risk:\n"
        "  * Find out if thunderstorms are common in your area.\n"
        "  * Sign up for weather alerts from local authorities.\n";

    const char *prepareEmergencyKit =
        "# Make an Emergency Kit:\n"
        "  * Pack water, easy-to-store food, a flashlight, batteries, a first-aid kit, and important medicines.\n";

    const char *familyEmergencyPlan =
        "# Plan with Your Family:\n"
        "  * Plan how to stay safe during a storm, like staying indoors.\n"
        "  * Pick a safe room inside, away from windows and doors.\n";

    const char *protectElectronics =
        "# Protect Your Electronics:\n"
        "  * Unplug electrical appliances and devices before the storm.\n"
        "  * Avoid using phones and electronics during a storm unless necessary.\n";

    const char *secureHome =
        "# Secure Your Home:\n"
        "  * Close windows, doors, and shutters to prevent wind damage.\n"
        "  * Remove or secure outdoor items that could blow away.\n";

    printf("%s", knowTheRisk);
    printf("%s", prepareEmergencyKit);
    printf("%s", familyEmergencyPlan);
    printf("%s", protectElectronics);
    printf("%s", secureHome);

    const char *stayInformed =
        "During a Thunderstorm: Stay Safe\n"
        "# Stay Updated:\n"
        "  * Keep listening to weather reports for warnings or updates.\n";

    const char *avoidWindows =
        "# Stay Away from Windows:\n"
        "  * Stay indoors, away from windows, doors, and anything that could break or fall.\n";

    const char *noMetal =
        "# Avoid Using Metal Objects:\n"
        "  * Don’t touch metal objects like pipes, faucets, or appliances.\n"
        "  * Don’t take a shower or bath during the storm.\n";

    const char *stayInside =
        "# Stay Inside:\n"
        "  * Stay indoors until the storm passes.\n"
        "  * If you’re outside, take shelter in a car or sturdy building.\n";

    printf("%s", stayInformed);
    printf("%s", avoidWindows);
    printf("%s", noMetal);
    printf("%s", stayInside);

    const char *checkForDamage =
        "After a Thunderstorm: What to Do\n"
        "# Check for Damage:\n"
        "  * Inspect your home for damage to the roof, windows, and electrical systems.\n"
        "  * If you see downed power lines, stay away and report them.\n";

    const char *cleanUpSafely =
        "# Clean Up Carefully:\n"
        "  * Wear gloves and shoes when cleaning up debris outside.\n"
        "  * Avoid touching anything that looks damaged or dangerous.\n";

    const char *stayAlert =
        "# Stay Alert:\n"
        "  * Listen to local news for updates and instructions.\n"
        "  * Watch for flooding or more storms after the initial one passes.\n";

    printf("%s", checkForDamage);
    printf("%s", cleanUpSafely);
    printf("%s", stayAlert);

    const char *safetyReminders =
        "Safety Tips:\n"
        "# Be Ready:\n"
        "  * Always have your emergency kit and stay informed about weather changes.\n"
        "# Stay Safe Indoors:\n"
        "  * During a thunderstorm, stay away from windows and avoid using metal objects.\n"
        "# Stay Connected:\n"
        "  * Let your family and friends know you're safe after the storm.\n";

    printf("%s", safetyReminders);
}

void tornado()
{
    const char *knowTheRisk =
        "Before a Tornado: Be Prepared\n"
        "# Know the Risk:\n"
        "  * Learn if your area is at risk for tornadoes.\n"
        "  * Sign up for weather alerts from local authorities.\n";

    const char *prepareEmergencyKit =
        "# Make an Emergency Kit:\n"
        "  * Include water, non-perishable food, a first-aid kit, flashlights, batteries, medicines, and a phone charger.\n";

    const char *familyEmergencyPlan =
        "# Make a Family Plan:\n"
        "  * Decide on a safe place to go if a tornado happens (like a basement or storm shelter).\n"
        "  * Pick a place where family can meet if you get separated.\n"
        "  * Teach everyone how to turn off gas, water, and electricity.\n";

    const char *protectDocuments =
        "# Protect Important Documents:\n"
        "  * Store important papers like IDs and insurance policies in a waterproof container or save them digitally.\n";

    const char *prepareHome =
        "# Prepare Your Home:\n"
        "  * Secure outdoor furniture and objects that can become dangerous in high winds.\n"
        "  * Reinforce doors and windows with storm shutters if possible.\n"
        "  * Make sure you have a sturdy, safe place to go, like a basement or an interior room without windows.\n";

    const char *insuranceCoverage =
        "# Insurance Coverage:\n"
        "  * Make sure your home and property are covered by insurance for tornadoes or wind damage.\n";

    printf("%s", knowTheRisk);
    printf("%s", prepareEmergencyKit);
    printf("%s", familyEmergencyPlan);
    printf("%s", protectDocuments);
    printf("%s", prepareHome);
    printf("%s", insuranceCoverage);

    const char *stayInformed =
        "During a Tornado: Stay Safe\n"
        "# Stay Informed:\n"
        "  * Keep an eye on weather alerts and warnings from local authorities.\n";

    const char *seekShelter =
        "# Seek Shelter:\n"
        "  * Go to a basement, storm shelter, or an interior room on the lowest floor with no windows.\n"
        "  * If outside or in a car, try to get to a sturdy building. If not possible, lie flat in a low area, covering your head.\n";

    const char *avoidHazards =
        "# Avoid Dangerous Areas:\n"
        "  * Stay away from windows, doors, and outside walls.\n"
        "  * Avoid large, open rooms like gymnasiums or auditoriums.\n";

    printf("%s", stayInformed);
    printf("%s", seekShelter);
    printf("%s", avoidHazards);

    // After a Tornado: What to Do
    const char *checkForInjuries =
        "After a Tornado: Stay Safe\n"
        "# Check for Injuries:\n"
        "  * Check yourself and others for injuries. Provide first aid if needed.\n"
        "  * Call emergency services if someone is seriously injured.\n";

    const char *inspectHome =
        "# Check Your Home for Damage:\n"
        "  * Look for structural damage, gas leaks, or downed power lines.\n"
        "  * If you think your home is unsafe, leave and contact local authorities.\n";

    const char *followGuidance =
        "# Listen to Authorities:\n"
        "  * Follow local guidance on what to do next, including shelter locations and emergency services.\n";

    printf("%s", checkForInjuries);
    printf("%s", inspectHome);
    printf("%s", followGuidance);

    const char *safetyReminders =
        "General Tornado Safety Tips:\n"
        "# Stay Prepared:\n"
        "  * Keep your emergency kit ready and practice your tornado safety plan with family.\n"
        "# Stay Informed:\n"
        "  * Have a battery-powered radio or weather app to get real-time updates.\n"
        "# Communicate:\n"
        "  * Let friends and family know you’re safe once the danger has passed.\n";

    printf("%s", safetyReminders);
}

void landslide()
{
    const char *knowTheRisk =
        "Before a Landslide: Prepare\n"
        "# You want to Know the Risk:\n"
        "  * Identify that your area is affected by Land slide\n"
        "  * Stay informed about high risks, especially during heavy rainfall.\n"
        "  * Sign up for local weather alerts and warnings.\n";

    const char *prepareEmergencyKit =
        "# Prepare an Emergency Kit:\n"
        "  * Include essentials such as drinking water, non-perishable food, a first-aid kit, flashlights,\n"
        "    batteries, necessary medications, and a portable phone charger.\n";

    const char *familyEmergencyPlan =
        "# Have a Family Emergency Plan:\n"
        "  * Plan evacuation routes in case you need to leave your home.\n"
        "  * Decide on a meeting point in case family members get separated.\n"
        "  * Make sure everyone knows how to shut off utilities like gas and electricity in an emergency.\n";

    const char *protectDocuments =
        "# Protect Important Documents:\n"
        "  * Store important documents such as IDs, insurance policies, and financial records in waterproof containers\n"
        "    or scan and save them digitally.\n";

    const char *prepareHome =
        "# Prepare Your Home:\n"
        "  * Direct water flow away from your home by installing proper drainage systems.\n"
        "  * Reinforce retaining walls and remove loose debris from around your property.\n"
        "  * Plant vegetation to reduce soil erosion.\n";

    const char *insuranceCoverage =
        "# Insurance Coverage:\n"
        "  * Ensure your home is covered by landslide or disaster insurance, especially if you live in a high-risk area.\n";

    printf("%s", knowTheRisk);
    printf("%s", prepareEmergencyKit);
    printf("%s", familyEmergencyPlan);
    printf("%s", protectDocuments);
    printf("%s", prepareHome);
    printf("%s", insuranceCoverage);

    const char *stayAlert =
        "During a Landslide: Staying Safe\n"
        "# Stay Alert:\n"
        "  * Listen to local warnings and evacuate immediately if authorities advise.\n"
        "  * Stay tuned to emergency alerts via a battery-operated radio.\n";

    const char *moveToHigherGround =
        "# Move to Higher Ground:\n"
        "  * If you hear rumbling or unusual sounds from the ground or nearby slopes, evacuate immediately.\n"
        "  * Move to higher, stable ground and avoid low-lying areas.\n";

    const char *avoidDriving =
        "# Avoid Driving:\n"
        "  * Do not attempt to drive during a landslide or immediately after one has occurred.\n"
        "  * Roads may be blocked or unstable, and landslides can continue even after the initial event.\n";

    printf("%s", stayAlert);
    printf("%s", moveToHigherGround);
    printf("%s", avoidDriving);

    const char *checkForInjuries =
        "After a Landslide: What to Do\n"
        "# Check for Injuries:\n"
        "  * Assess yourself and others for injuries and provide first aid as needed.\n"
        "  * Call emergency services if anyone is injured or trapped.\n";

    const char *inspectHome =
        "# Inspect Your Home:\n"
        "  * Look for structural damage, cracks in the foundation, or other signs that your home has shifted.\n"
        "  * Check for gas leaks and electrical hazards, and avoid turning on utilities until they are inspected.\n";

    const char *avoidDebris =
        "# Avoid Debris:\n"
        "  * Stay away from landslide debris, as it may be unstable and prone to further slides.\n"
        "  * Do not walk through affected areas without proper safety precautions.\n";

    const char *followGuidance =
        "# Follow Official Guidance:\n"
        "  * Continue listening to local authorities for information about recovery efforts, shelter locations, and assistance services.\n";

    printf("%s", checkForInjuries);
    printf("%s", inspectHome);
    printf("%s", avoidDebris);
    printf("%s", followGuidance);

    const char *safetyReminders =
        "General Safety Reminders:\n"
        "# Stay Prepared:\n"
        "  * Keep an emergency kit ready at all times and practice evacuation drills with your family.\n"
        "# Stay Informed:\n"
        "  * Keep a battery-operated or hand-crank radio to monitor emergency broadcasts and weather alerts.\n"
        "# Communicate:\n"
        "  * Let friends and family know your safety status and whereabouts after a landslide.\n";

    printf("%s", safetyReminders);
}
void hailstorm()
{
    const char *knowTheRisk =
        "Before a Hailstorm: Preparation\n"
        "# Know the Risk:\n"
        "  * Stay updated on weather forecasts, especially during storm seasons.\n"
        "  * Sign up for weather alerts from local authorities.\n";

    const char *prepareEmergencyKit =
        "# Prepare an Emergency Kit:\n"
        "  * Include essentials such as drinking water, non-perishable food, a first-aid kit, flashlights,\n"
        "    batteries, necessary medications, and a portable phone charger.\n";

    const char *protectYourVehicle =
        "# Protect Your Vehicle:\n"
        "  * Park your car in a garage or under a sturdy shelter to avoid hail damage.\n"
        "  * Use blankets or hail-resistant covers if you cannot move your car to a safe location.\n";

    const char *prepareHome =
        "# Prepare Your Home:\n"
        "  * Close all windows and doors securely.\n"
        "  * Move outdoor furniture, plants, and items indoors or secure them to prevent damage.\n"
        "  * Ensure your home’s roof and windows are strong enough to withstand hail.\n";

    const char *insuranceCoverage =
        "# Insurance Coverage:\n"
        "  * Verify that your home and vehicle are covered by insurance in case of hail damage.\n";

    printf("%s", knowTheRisk);
    printf("%s", prepareEmergencyKit);
    printf("%s", protectYourVehicle);
    printf("%s", prepareHome);
    printf("%s", insuranceCoverage);

    const char *stayIndoors =
        "During a Hailstorm: Staying Safe\n"
        "# Stay Indoors:\n"
        "  * Remain inside your home or shelter until the hailstorm passes.\n"
        "  * Stay away from windows and glass doors as hail can shatter glass.\n";

    const char *avoidDriving =
        "# Avoid Driving:\n"
        "  * If you are driving, pull over to a safe location away from trees and power lines.\n"
        "  * Stay inside the vehicle, keep your head down, and cover yourself with a blanket if possible.\n";

    const char *protectPets =
        "# Protect Pets and Livestock:\n"
        "  * Bring pets indoors and move livestock to shelter if possible.\n";

    const char *powerSafety =
        "# Power Safety:\n"
        "  * Be cautious of potential power outages. Unplug electrical devices to avoid damage from power surges.\n";

    printf("%s", stayIndoors);
    printf("%s", avoidDriving);
    printf("%s", protectPets);
    printf("%s", powerSafety);

    const char *inspectForDamage =
        "After a Hailstorm: What to Do\n"
        "# Inspect Your Home and Property for Damage:\n"
        "  * Check your roof, windows, and outdoor areas for any signs of damage.\n"
        "  * Take photos of any damage for insurance purposes.\n";

    const char *checkVehicle =
        "# Check Your Vehicle:\n"
        "  * Inspect your vehicle for dents, broken windows, or any other damage caused by hail.\n"
        "  * Report any damages to your insurance company immediately.\n";

    const char *stayAlert =
        "# Stay Alert for Additional Storms:\n"
        "  * Monitor weather reports for potential follow-up storms or severe weather.\n";

    const char *seekHelp =
        "# Seek Help if Necessary:\n"
        "  * If anyone has been injured or property has been severely damaged, contact emergency services for assistance.\n";

    printf("%s", inspectForDamage);
    printf("%s", checkVehicle);
    printf("%s", stayAlert);
    printf("%s", seekHelp);

    const char *safetyReminders =
        "General Safety Reminders:\n"
        "# Stay Prepared:\n"
        "  * Keep an emergency kit handy, and always be ready to take shelter.\n"
        "# Stay Informed:\n"
        "  * Use a battery-operated or hand-crank radio to stay updated on weather conditions.\n"
        "# Protect Your Property:\n"
        "  * Make sure your home and vehicle are adequately protected and covered by insurance.\n";

    printf("%s", safetyReminders);
}
