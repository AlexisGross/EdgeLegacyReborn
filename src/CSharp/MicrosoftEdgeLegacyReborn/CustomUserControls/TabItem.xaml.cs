using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;

// La plantilla de elemento Control de usuario está documentada en https://go.microsoft.com/fwlink/?LinkId=234236

namespace MicrosoftEdgeLegacyReborn.CustomUserControls
{
    public sealed partial class TabItem : UserControl
    {
        public TabItem()
        {
            this.InitializeComponent();
        }

        #region "IsPreviewVisible" Propiedad que establece si es visible la preview de las pestañas.
        public bool IsPreviewVisible
        {
            get { return (bool)GetValue(IsPreviewVisibleProperty); }
            set { SetValue(IsPreviewVisibleProperty, value); }
        }

        public static readonly DependencyProperty IsPreviewVisibleProperty = DependencyProperty.Register("IsTabsPreviewVisible", typeof(bool), typeof(TabItem), new PropertyMetadata(false));
        #endregion

        #region "IsTabSelected" Propiedad que establece si es visible la preview de las pestañas.
        public bool IsTabSelected
        {
            get { return (bool)GetValue(IsTabSelectedProperty); }
            set { SetValue(IsTabSelectedProperty, value); }
        }

        public static readonly DependencyProperty IsTabSelectedProperty = DependencyProperty.Register("IsTabSelected", typeof(bool), typeof(TabItem), new PropertyMetadata(true));
        #endregion

        #region "TitleText" Propiedad que establece el título de la pestaña.
        public string TitleText
        {
            get { return TitleTextBox.Text; }
            set { TitleTextBox.Text = value; }
        }

        #endregion
    }
}