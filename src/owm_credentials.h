const bool DebugDisplayUpdate = false;
// Change to your WiFi credentials
const char* ssid     = "ssid";
const char* password = "password";

// Open weathermap - forecast data source
String apikey        = "key";
const char server[] = "api.openweathermap.org";

// Weatherunderground - observation data source
// https://www.wunderground.com/pws/overview
const char wunderground[] = "api.weather.com";
String wundergroundKey = "key";
String wundergroundStationId = "IBATH9";

String City             = "Bath";
String Latitude         = "52";
String Longitude        = "2";
String Language         = "EN";
String Hemisphere       = "north";
String Units            = "M";
const char* Timezone    = "GMT0BST,M3.5.0/01,M10.5.0/02";
const char* ntpServer   = "0.uk.pool.ntp.org";
int   gmtOffset_sec     = 0;
int   daylightOffset_sec = 3600;
