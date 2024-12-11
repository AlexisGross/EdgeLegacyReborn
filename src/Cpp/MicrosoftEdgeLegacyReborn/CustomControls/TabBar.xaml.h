//
// TabBar.xaml.h
// Declaration of the TabBar class
//

#pragma once

#include "CustomControls\TabBar.g.h"
#include "Converters.h"

using namespace MicrosoftEdgeLegacyReborn;
using namespace MicrosoftEdgeLegacyReborn::CustomUserControls;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Shapes;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

namespace MicrosoftEdgeLegacyReborn
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class CustomUserControls::TabBar sealed
	{
	public:
		TabBar::TabBar();

		property bool IsTabsPreviewVisible
		{
			bool get()
			{
				return safe_cast<bool>(GetValue(IsTabsPreviewVisibleProperty));
			};
			void set(bool value)
			{
				SetValue(IsTabsPreviewVisibleProperty, value);
			};
		}

		property UIElement^ RightContent
		{
			UIElement^ get()
			{
				return safe_cast<UIElement^>(GetValue(RightContentProperty));
			};
			void set(UIElement^ value)
			{
				SetValue(RightContentProperty, value);
			};
		}

	private:
		void TabBar::PreviewButton_Click(Object^ sender, RoutedEventArgs^ e);
		static DependencyProperty^ IsTabsPreviewVisibleProperty;
		static DependencyProperty^ RightContentProperty;
	};
}
