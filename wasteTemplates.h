#ifndef WASTETEMPLATES_H
#define WASTETEMPLATES_H


// NOTE TO RESEARCH MEMBERS, these are the basic basis as such;
struct WasteTemplateData {
  const char* shape;           // e.g., "cylindrical", "rectangular", "irregular", "circular"
  const char* dominantColor;   // e.g., "clear", "green", "red", "brown", "white"
  float colorVariance;         // e.g., 0.10, 0.25, etc.
  const char* texture;         // e.g., "smooth", "rough", "patterned"
  const char* branding;        // e.g., "Coke", "EcoPack", "Generic", "None"
  int edgeDensity;             // arbitrary integer value representing edge count per area unit
  bool heatPacking;            // true if heat-sealed packaging is detected
  bool metalDetected;          // true if metal is present
  bool attachmentDetected;     // true if additional attachment exists
};

struct WasteTemplate {
  int id;
  const char* name;
  const char* description;
  const char* category;        // e.g., "Biodegradable", "Non-Biodegradable", "Recyclable"
  WasteTemplateData data;
};

WasteTemplate wasteTemplates[] = {
  {  0, "Plastic Bottle", "Transparent plastic bottle used for beverages", "Recyclable", {"cylindrical", "clear", 0.12, "smooth", "Coke", 10, false, false, false} },
  {  1, "Green Bottle", "Green colored glass bottle used for beverages", "Recyclable", {"cylindrical", "green", 0.10, "smooth", "Pepsi", 12, false, true, false} },
  {  2, "Aluminum Can", "Aluminum beverage can", "Recyclable", {"cylindrical", "silver", 0.08, "smooth", "Coke", 15, false, true, false} },
  {  3, "Paper Cup", "Disposable paper cup", "Biodegradable", {"conical", "white", 0.20, "rough", "Generic", 18, true, false, false} },
  {  4, "Plastic Cup", "Disposable plastic cup", "Non-Biodegradable", {"conical", "blue", 0.15, "smooth", "Generic", 14, false, false, false} },
  {  5, "Plastic Fork", "Disposable plastic fork", "Non-Biodegradable", {"irregular", "white", 0.30, "patterned", "None", 25, false, false, true} },
  {  6, "Plastic Knife", "Disposable plastic knife", "Non-Biodegradable", {"irregular", "white", 0.28, "patterned", "None", 24, false, false, true} },
  {  7, "Paper Plate", "Disposable paper plate", "Biodegradable", {"circular", "white", 0.22, "rough", "EcoPack", 20, true, false, false} },
  {  8, "Plastic Plate", "Disposable plastic plate", "Non-Biodegradable", {"circular", "white", 0.18, "smooth", "Generic", 16, false, false, false} },
  {  9, "Canned Food", "Metal can containing food", "Non-Biodegradable", {"rectangular", "silver", 0.10, "smooth", "FoodCo", 13, false, true, false} },
  { 10, "Sandwich Wrapper", "Foil and plastic laminated wrapper", "Non-Biodegradable", {"irregular", "multicolor", 0.35, "rough", "None", 30, true, true, true} },
  { 11, "Fruit Container", "Plastic container for cut fruit", "Recyclable", {"rectangular", "transparent", 0.14, "smooth", "FreshPack", 11, false, false, false} },
  { 12, "Yogurt Container", "Small plastic container for yogurt", "Recyclable", {"rectangular", "white", 0.16, "smooth", "Yum", 12, false, false, false} },
  { 13, "Ice Cream Cup", "Paper cup for ice cream", "Biodegradable", {"circular", "white", 0.25, "rough", "CoolTreat", 19, true, false, false} },
  { 14, "Plastic Straw", "Disposable plastic straw", "Non-Biodegradable", {"cylindrical", "transparent", 0.05, "smooth", "None", 5, false, false, false} },
  { 15, "Paper Bag", "Paper bag for food packaging", "Biodegradable", {"rectangular", "brown", 0.30, "rough", "EcoPack", 22, true, false, false} },
  { 16, "Plastic Bag", "Disposable plastic bag", "Non-Biodegradable", {"irregular", "transparent", 0.20, "smooth", "None", 17, false, false, false} },
  { 17, "Napkin", "Paper napkin", "Biodegradable", {"irregular", "white", 0.40, "rough", "None", 28, true, false, false} },
  { 18, "Food Tray", "Disposable foam tray", "Non-Biodegradable", {"rectangular", "white", 0.12, "smooth", "FoamCo", 14, false, false, true} },
  { 19, "Plastic Lid", "Plastic lid for cups", "Non-Biodegradable", {"circular", "white", 0.10, "smooth", "Generic", 9, false, false, false} },
  { 20, "Glass Jar", "Glass jar for sauces or spreads", "Recyclable", {"cylindrical", "clear", 0.09, "smooth", "Generic", 13, false, true, false} },
  { 21, "Metal Spoon", "Disposable metal spoon", "Recyclable", {"irregular", "silver", 0.07, "smooth", "FoodCo", 10, false, true, false} },
  { 22, "Plastic Spoon", "Disposable plastic spoon", "Non-Biodegradable", {"irregular", "white", 0.28, "smooth", "None", 23, false, false, true} },
  { 23, "Disposable Bowl", "Paper or plastic bowl", "Biodegradable", {"circular", "white", 0.18, "rough", "EcoPack", 17, true, false, false} },
  { 24, "Condiment Packet", "Small packet for sauces", "Non-Biodegradable", {"rectangular", "multicolor", 0.32, "patterned", "FoodCo", 26, true, false, false} },
  { 25, "Salad Container", "Plastic container for salads", "Recyclable", {"rectangular", "transparent", 0.15, "smooth", "FreshPack", 12, false, false, false} },
  { 26, "Sandwich Box", "Cardboard box for sandwiches", "Biodegradable", {"rectangular", "brown", 0.20, "rough", "EcoPack", 18, true, false, false} },
  { 27, "Cardboard Packaging", "Corrugated cardboard packaging", "Biodegradable", {"rectangular", "brown", 0.35, "rough", "None", 27, true, false, false} },
  { 28, "Snack Wrapper", "Plastic wrapper for snacks", "Non-Biodegradable", {"irregular", "multicolor", 0.38, "patterned", "SnackCo", 29, true, false, false} },
  { 29, "Juice Carton", "Composite carton for juice", "Recyclable", {"rectangular", "orange", 0.22, "smooth", "Juicy", 16, true, false, false} },
  { 30, "Milk Carton", "Paper-based carton for milk", "Biodegradable", {"rectangular", "white", 0.25, "rough", "DairyBest", 18, true, false, false} },
  { 31, "Beverage Can", "Metal can for soft drinks", "Recyclable", {"cylindrical", "silver", 0.10, "smooth", "SodaPop", 15, false, true, false} },
  { 32, "Hot Dog Wrapper", "Paper wrapper for hot dogs", "Biodegradable", {"irregular", "red", 0.33, "rough", "StreetEats", 27, true, false, false} },
  { 33, "Ice Cream Cone", "Paper cone for ice cream", "Biodegradable", {"conical", "brown", 0.30, "rough", "CoolTreat", 20, true, false, false} },
  { 34, "Plastic Cutlery Set", "Set of disposable plastic utensils", "Non-Biodegradable", {"irregular", "white", 0.35, "patterned", "None", 30, false, false, true} },
  { 35, "Recyclable Paper Bag", "Paper bag with recycling symbol", "Biodegradable", {"rectangular", "brown", 0.28, "rough", "EcoPack", 23, true, false, false} },
  { 36, "Coffee Cup Sleeve", "Paper sleeve for coffee cups", "Biodegradable", {"cylindrical", "brown", 0.20, "rough", "CoffeeCo", 14, true, false, false} },
  { 37, "Small Plastic Container", "Mini plastic container for condiments", "Recyclable", {"rectangular", "transparent", 0.17, "smooth", "CondCo", 11, false, false, false} },
  { 38, "Food Packaging Film", "Thin plastic film for wrapping food", "Non-Biodegradable", {"irregular", "transparent", 0.12, "smooth", "None", 8, false, false, false} },
  { 39, "Disposable Straw Pack", "Pack of multiple plastic straws", "Non-Biodegradable", {"cylindrical", "transparent", 0.05, "smooth", "None", 6, false, false, false} },
  { 40, "Chocolate Wrapper", "Foil wrapper for chocolate bars", "Non-Biodegradable", {"irregular", "multicolor", 0.40, "patterned", "Choco", 32, true, true, false} },
  { 41, "Granola Bar Wrapper", "Plastic/foil wrapper for granola bars", "Non-Biodegradable", {"irregular", "multicolor", 0.38, "patterned", "GranolaCo", 31, true, true, false} },
  { 42, "Fruit Peel", "Organic peel from fruits", "Biodegradable", {"irregular", "orange", 0.45, "rough", "None", 35, true, false, false} },
  { 43, "Vegetable Peel", "Organic peel from vegetables", "Biodegradable", {"irregular", "green", 0.47, "rough", "None", 36, true, false, false} },
  { 44, "Paper Napkin", "Thin paper napkin", "Biodegradable", {"irregular", "white", 0.42, "rough", "None", 34, true, false, false} },
  { 45, "Plastic Utensil Pack", "Pack of assorted plastic utensils", "Non-Biodegradable", {"irregular", "white", 0.36, "patterned", "None", 29, false, false, true} },
  { 46, "Paper Lid", "Paper lid for disposable cups", "Biodegradable", {"circular", "white", 0.20, "rough", "EcoPack", 15, true, false, false} },
  { 47, "Plastic Lid 2", "Alternative design plastic cup lid", "Non-Biodegradable", {"circular", "white", 0.18, "smooth", "Generic", 12, false, false, false} },
  { 48, "Plastic Tray", "Disposable plastic food tray", "Non-Biodegradable", {"rectangular", "white", 0.22, "smooth", "FoodCo", 19, false, false, true} },
  { 49, "Reusable Water Bottle", "Durable reusable plastic bottle", "Recyclable", {"cylindrical", "blue", 0.10, "smooth", "EcoPack", 10, false, false, false} }
};

// NOTE TO RESEARCH MEMBERS 2. Unrecognized items are manually depicted by the system code without exact name return but only category.

const int wasteTemplatesCount = sizeof(wasteTemplates) / sizeof(WasteTemplate);

#endif
