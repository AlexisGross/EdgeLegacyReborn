#pragma once
#include "SharedFunctions.h"

using namespace MicrosoftEdgeLegacyReborn;
using namespace Platform;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media;

namespace MicrosoftEdgeLegacyReborn
{
	/// <summary>
	/// Converts a Boolean value to a Visibility value.
	/// </summary>
	public ref class BooleanToVisibilityConverter sealed : IValueConverter
	{
	public:
		/// <summary>
		/// Converts a <see cref="bool"/> to a <see cref="Visibility"/>.
		/// </summary>
		virtual Object^ Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language);

		/// <summary>
		/// Converts back a <see cref="Visibility"/> value to a <see cref="bool"/>.
		/// </summary>
		virtual Object^ ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language);
	};

	/// <summary>
	/// Converts a Boolean value to a string based on the parameter provided.
	/// </summary>
	public ref class BooleanToStringSelectorConverter sealed : IValueConverter
	{
	public:
		virtual Object^ Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language);
		virtual Object^ ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language);
	};

	/// <summary>
	/// Converts a Boolean value to a SolidColorBrush based on the parameter provided.
	/// </summary>
	public ref class BooleanToColorSelectorConverter sealed : IValueConverter
	{
	public:
		virtual Object^ Convert(Object^ value, TypeName targetType, Object^ parameter, String^ language);
		virtual Object^ ConvertBack(Object^ value, TypeName targetType, Object^ parameter, String^ language);
	};
}