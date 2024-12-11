using Windows.ApplicationModel.Core;
using Windows.UI;
using Windows.UI.ViewManagement;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Navigation;

// La plantilla de elemento Página en blanco está documentada en https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0xc0a

namespace MicrosoftEdgeLegacyReborn
{
    /// <summary>
    /// Página vacía que se puede usar de forma independiente o a la que se puede navegar dentro de un objeto Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
        }

        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            base.OnNavigatedTo(e);

            #region Title bar customization
            ApplicationViewTitleBar titleBar = ApplicationView.GetForCurrentView().TitleBar;

            // Establece el color de la barra de título.
            titleBar.BackgroundColor = Colors.Transparent;

            // Establece el color de los botones de la ventana activa.
            titleBar.ButtonBackgroundColor = Colors.Transparent;

            // Establece el color de los botones de la ventana inactiva.
            titleBar.ButtonInactiveBackgroundColor = Colors.Transparent;

            // Oculta la barra de título predeterminada.
            CoreApplicationViewTitleBar coreTitleBar = CoreApplication.GetCurrentView().TitleBar;
            coreTitleBar.ExtendViewIntoTitleBar = true;

            Window.Current.SetTitleBar(tabBar.RightContent);
            #endregion
        }
    }
}