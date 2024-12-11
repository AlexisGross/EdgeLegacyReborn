//
// App.xaml.h
// Declaración de la clase App.
//

#pragma once

#include "App.g.h"

namespace MicrosoftEdgeLegacyReborn
{
	/// <summary>
	/// Proporciona un comportamiento específico de la aplicación para complementar la clase Application predeterminada.
	/// </summary>
	ref class App sealed
	{
	protected:
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;

	internal:
		App();

	private:
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
		void OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e);
	};
}
