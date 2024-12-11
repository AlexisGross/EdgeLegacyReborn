#include "pch.h"
#include "Converters.h"
using namespace std;
using namespace MicrosoftEdgeLegacyReborn;

Object^ BooleanToVisibilityConverter::Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
    bool boolValue = safe_cast<bool>(value);
    return boolValue ? Visibility::Visible : Visibility::Collapsed;
}

Object^ BooleanToVisibilityConverter::ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
    Visibility visibilityValue = safe_cast<Visibility>(value);
    String^ param = parameter ? parameter->ToString() : "";
    return (visibilityValue == Visibility::Visible) != (param == "Reverse");
}

Object^ BooleanToStringSelectorConverter::Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
    wstring wParam(safe_cast<String^>(parameter)->Data());

    // Dividimos el parámetro usando '|' como delimitador
    size_t delimiterPos = wParam.find(L'|');
    if (delimiterPos == wstring::npos)
    {
        throw ref new InvalidArgumentException("El parámetro no contiene el delimitador '|'.");
    }

    wstring part1 = wParam.substr(0, delimiterPos);
    wstring part2 = wParam.substr(delimiterPos + 1);

    return ref new String((safe_cast<bool>(value) ? part1 : part2).c_str());
}

Object^ BooleanToStringSelectorConverter::ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
    throw ref new NotImplementedException();
}

Object^ BooleanToColorSelectorConverter::Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
    bool boolValue = safe_cast<bool>(value);
    String^ paramStr = safe_cast<String^>(parameter);
    wstring wParam(paramStr->Data());

    // Dividimos el parámetro usando '|' como delimitador
    size_t delimiterPos = wParam.find(L'|');
    if (delimiterPos == wstring::npos)
    {
        throw ref new InvalidArgumentException("El parámetro no contiene el delimitador '|'.");
    }

    wstring color1 = wParam.substr(0, delimiterPos);
    wstring color2 = wParam.substr(delimiterPos + 1);

    // Convertimos a color y creamos el brush
    String^ colorHex = ref new String((boolValue ? color1 : color2).c_str());
    return ref new SolidColorBrush(SharedFunctions::GetColorFromHex(colorHex));
}

Object^ BooleanToColorSelectorConverter::ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language)
{
    throw ref new NotImplementedException();
}