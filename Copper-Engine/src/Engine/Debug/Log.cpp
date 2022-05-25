#include "Log.h"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace Copper {

	namespace Logger {

		std::shared_ptr<spdlog::logger> Logger::logger;

		void Logger::Init() {

			spdlog::set_pattern("%^[%T] %n: %v%$");

			logger = spdlog::stdout_color_mt("Logger");
			logger->set_level(spdlog::level::trace);

		}

	}

}