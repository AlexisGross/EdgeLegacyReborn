#include "pch.h"
#include <string>
#include <sstream>
#include <vector>
#include "SharedFunctions.h"

using namespace MicrosoftEdgeLegacyReborn;

using namespace std;
using namespace Platform;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI;

Color SharedFunctions::GetColorFromHex(String^ hex)
{
    wstring hexStr(hex->Data());

    // Remove the # symbol if present
    if (hexStr[0] == L'#')
    {
        hexStr.erase(0, 1);
    }

    byte a = 255;
    byte r = static_cast<byte>(stoi(hexStr.substr(0, 2), nullptr, 16));
    byte g = static_cast<byte>(stoi(hexStr.substr(2, 2), nullptr, 16));
    byte b = static_cast<byte>(stoi(hexStr.substr(4, 2), nullptr, 16));

    if (hexStr.length() == 8)
    {
        a = static_cast<byte>(stoi(hexStr.substr(0, 2), nullptr, 16));
        r = static_cast<byte>(stoi(hexStr.substr(2, 2), nullptr, 16));
        g = static_cast<byte>(stoi(hexStr.substr(4, 2), nullptr, 16));
        b = static_cast<byte>(stoi(hexStr.substr(6, 2), nullptr, 16));
    }

    return ColorHelper::FromArgb(a, r, g, b);
}