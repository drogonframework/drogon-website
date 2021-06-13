#include <drogon/drogon.h>

using namespace drogon;

int main()
{
	app()
		.loadConfigFile("drogon_config.json")
		.run();
}