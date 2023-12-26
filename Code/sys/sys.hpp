#pragma once
#include <shared/adastral_defs.h>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "zip/zip.h"
#define PRIMARY_URL "https://fusion.adastral.net/"
class sys {
 public:
  static int ExecWithParam(const std::vector<std::string>& params);
  static int DeleteDirectoryContent(const std::filesystem::path& dir);
  static int ExtractZip(const std::string& szInputFile, const std::string& szOutputFile);
  static bool CheckTF2Installed(const std::filesystem::path& steamDir);
  static bool CheckSDKInstalled(const std::filesystem::path& steamDir);
  static std::filesystem::path GetSteamPath();
};