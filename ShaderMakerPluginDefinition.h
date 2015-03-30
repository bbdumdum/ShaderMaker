/*static CFFGLPluginInfo PluginInfo (
                                   ShaderMaker::CreateInstance,		// Create method
                                   "ABAB",								// *** Plugin unique ID (4 chars) - this must be unique for each plugin
                                   "Momo",						        // *** Plugin name - make it different for each plugin
                                   1,						   			// API major version number
                                   006,								// API minor version number
                                   1,									// *** Plugin major version number
                                   002,								// *** Plugin minor version number
                                   FF_EFFECT,							// Plugin type is always an effect
                                   "Wraps ShaderToy and GLSLSandbox shaders into a FFGL plugin", // *** Plugin description - you can expand on this
                                   "by Lynn Jarvis (spout.zeal.co) OSX port by Amaury Hazan (billaboop.com)"			// *** About - use your own name and details
);*/

#define SM_PLUGIN_ID    "ABAB"  // *** Plugin unique ID (4 chars) - this must be unique for each plugin
#define SM_PLUGIN_NAME  "MOMO"  // *** Plugin name - make it different for each plugin
#define SM_PLUGIN_API_MAJOR 1   // *** API major version number
#define SM_PLUGIN_API_MINOR 006 // *** API minor version number
#define SM_PLUGIN_MAJOR     1   // *** Plugin major version number
#define SM_PLUGIN_MINOR     002 // *** Plugin minor version number
#define SM_PLUGIN_DESCRIPTION  "Wraps ShaderToy and GLSLSandbox shaders into a FFGL plugin" // *** Plugin description - you can expand on this
#define SM_PLUGIN_ABOUT "by Lynn Jarvis (spout.zeal.co) OSX port by Amaury Hazan (billaboop.com)"			// *** About - use your own name and details
