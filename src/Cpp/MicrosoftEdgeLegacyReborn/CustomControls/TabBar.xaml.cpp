//
// TabBar.xaml.cpp
// Implementation of the TabBar class
//
#include "pch.h"
#include "TabBar.xaml.h"
#include "Converters.h"

using namespace MicrosoftEdgeLegacyReborn;
using namespace MicrosoftEdgeLegacyReborn::CustomUserControls;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Shapes;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The User Control item template is documented at https://go.microsoft.com/fwlink/?LinkId=234236

TabBar::TabBar()
{
    InitializeComponent();
	if (RightContent == nullptr)
	{
		RightContent = ref new Rectangle();
		((Rectangle^)RightContent)->Name = "TitleBarDragRegion";
		((Rectangle^)RightContent)->Fill = ref new SolidColorBrush(Colors::Transparent);
		RightContentPresenter->Content = RightContent;
	}
}

void TabBar::PreviewButton_Click(Object^ sender, RoutedEventArgs^ e)
{
	IsTabsPreviewVisible = !IsTabsPreviewVisible;
}

DependencyProperty^ TabBar::IsTabsPreviewVisibleProperty = DependencyProperty::Register("IsTabsPreviewVisible", bool::typeid, TabBar::typeid, ref new PropertyMetadata(false));

DependencyProperty^ TabBar::RightContentProperty = DependencyProperty::Register("RightContent", Object::typeid, TabBar::typeid, ref new PropertyMetadata(nullptr));