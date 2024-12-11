//
// MainPage.xaml.cpp
// Implementación de la clase MainPage.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "Converters.h"
#include "CustomControls/TabBar.xaml.h"

using namespace MicrosoftEdgeLegacyReborn;
using namespace Platform;
using namespace Windows::ApplicationModel::Core;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI;
using namespace Windows::UI::ViewManagement;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// La plantilla de elemento Página en blanco está documentada en https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0xc0a

MainPage::MainPage()
{
	InitializeComponent();
}

void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
	Page::OnNavigatedTo(e);

	// Obtén la barra de título de la vista actual
	ApplicationViewTitleBar^ titleBar = ApplicationView::GetForCurrentView()->TitleBar;

	// Establece los colores de la ventana activa e inactiva
	titleBar->ButtonBackgroundColor = Colors::Transparent;
	titleBar->ButtonInactiveBackgroundColor = Colors::Transparent;

	// Oculta la barra de título predeterminada
	CoreApplicationViewTitleBar^ coreTitleBar = CoreApplication::GetCurrentView()->TitleBar;
	coreTitleBar->ExtendViewIntoTitleBar = true;

	Window::Current->SetTitleBar(tabBar->RightContent);
}