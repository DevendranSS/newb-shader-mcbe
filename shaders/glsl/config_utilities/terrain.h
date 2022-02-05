// Newb Shader

/*""""""""""""""""""""""""""""""""""""""*/
/* VOXEL SHADOW SCRIPT SUPPORT */

// For removing old mcpe shadows
// This method of removal has issues with nearby torch lights

// Toggle - Remove old shadow in all cases
//#define REMOVE_OLD_SHADOW

/*""""""""""""""""""""""""""""""""""""""*/


/*""""""""""""""""""""""""""""""""""""""*/
/* TERRAIN LIGHTING */

// Toggle - Flickering torch light
//#define BLINKING_TORCH

// Toggle - God rays (incomplete)
//#define GOD_RAYS

// Value - Intensity of soft shadow (0-1)
#define shadow_intensity 0.7

// Value - Night extra brightness
#define night_brightness 0.1

// Value - Cave extra brightness
#define cave_brightness 0.1

// Value - Torch brightness
#define torch_intensity 1.0

// Color - Top light color
const vec3 morning_color = vec3(1.0,0.45,0.14);
const vec3 noon_color = vec3(1.0,0.77,0.6);
const vec3 night_color = vec3(0.5,0.64,1.0);

// Color - Torch light color
const vec3 torch_color = vec3(1.0,0.52,0.18);

/*""""""""""""""""""""""""""""""""""""""*/


/*""""""""""""""""""""""""""""""""""""""*/
/* WAVE */

// Toggle - Plants Wave (leaves/plants)
// Value - Wave animation intensity (Plants)
#define PLANTS_WAVE 0.02

// Toggle - Lantern swing
// Value - Lantern swing intensity (0-0.3)
#define LANTERN_WAVE 0.08

// Toggle - Non-transparent leaves wave (might cause white lines at edges)
//#define ALL_LEAVES_WAVE

// Toggle - Extra plants Wave for 1.18 (won't work with add-ons which add new blocks)
//#define EXTRA_PLANTS_WAVE

// Value - Wave animation speed (Plants,leaves)
#define wave_speed 2.6

// Value - Rainy wind blow transparency (0-0.3)
#define rain_blow_opacity 0.19

/*""""""""""""""""""""""""""""""""""""""*/


/*""""""""""""""""""""""""""""""""""""""*/
/* WATER */

// Toggle - Water wave
// Value - Wave intensity of water surface
#define WATER_WAVE 0.02

// Toggle - Cloud reflection on water
#define CLOUD_REFLECTION

// Toggle - Use only surface angle for water transparency fade (gives more transparency)
//#define USE_ANGLE_BLEND_FADE

// Value - Water transparency (0-1)
#define water_transparency 0.47

// Value - Water noise bump height (0-0.2)
#define water_bump 0.07

// Color - Water color
const vec3 sea_water_color = vec3(0.13,0.65,0.87);
const vec3 fresh_water_color = vec3(0.07,0.55,0.55);
const vec3 marshy_water_color = vec3(0.27,0.4,0.1);

/*""""""""""""""""""""""""""""""""""""""*/


/*""""""""""""""""""""""""""""""""""""""*/
/* UNDERWATER */

// Toggle - Underwater Wave
// Value - Wave intensity
#define UNDERWATER_WAVE 0.06

// Value - Underwater brightness
#define underwater_brightness 0.8

// Value - Underwater soft caustic intensity
#define caustic_intensity 2.5

// Color - Underwater lighting color
const vec3 underwater_color = vec3(0.2,0.6,1.0);

/*""""""""""""""""""""""""""""""""""""""*/


