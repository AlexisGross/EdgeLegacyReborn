//
// TabItem.xaml.h
// Declaration of the TabItem class
//

#pragma once
#include "pch.h"
#include "CustomControls\TabItem.g.h"
#include "Converters.h"

using namespace MicrosoftEdgeLegacyReborn;
using namespace MicrosoftEdgeLegacyReborn::CustomUserControls;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

namespace MicrosoftEdgeLegacyReborn
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class CustomUserControls::TabItem sealed
	{
	public:
		TabItem::TabItem();

		property bool IsPreviewVisible
		{
			bool get()
			{
				return safe_cast<bool>(GetValue(IsPreviewVisibleProperty));
			};
			void set(bool value)
			{
				SetValue(IsPreviewVisibleProperty, value);
			};
		}

		property bool IsTabSelected
		{
			bool get()
			{
				return (bool)(GetValue(IsTabSelectedProperty));
			};
			void set(bool value)
			{
				SetValue(IsTabSelectedProperty, value);
			};
		}

		property String^ TitleText
		{
			String^ get()
			{
				return TitleTextBox->Text;
			}
			void set(String^ value)
			{
				TitleTextBox->Text = value;
			}
		}

	private:
		static DependencyProperty^ IsPreviewVisibleProperty;
		static DependencyProperty^ IsTabSelectedProperty;
	};
}