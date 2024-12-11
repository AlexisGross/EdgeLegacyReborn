//
// TabItem.xaml.cpp
// Implementation of the TabItem class
//
#include "pch.h"
#include "TabItem.xaml.h"
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

// The User Control item template is documented at https://go.microsoft.com/fwlink/?LinkId=234236

TabItem::TabItem()
{
    InitializeComponent();
}

DependencyProperty^ TabItem::IsPreviewVisibleProperty = DependencyProperty::Register("IsPreviewVisible", bool::typeid, TabItem::typeid, ref new PropertyMetadata(false));

DependencyProperty^ TabItem::IsTabSelectedProperty = DependencyProperty::Register("IsTabSelected", bool::typeid, TabItem::typeid, ref new PropertyMetadata(true));