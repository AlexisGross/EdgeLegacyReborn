#pragma once
#include "pch.h"
#include <string>
#include <sstream>
#include <vector>

using namespace MicrosoftEdgeLegacyReborn;

using namespace std;
using namespace Platform;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI;

namespace MicrosoftEdgeLegacyReborn
{
	/// <summary>
	/// Provides shared functions.
	/// </summary>
	class SharedFunctions
	{
	public:
		static Color GetColorFromHex(String^ hex);
	};
}