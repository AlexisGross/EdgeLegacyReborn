using Windows.UI;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Shapes;

// La plantilla de elemento Control de usuario está documentada en https://go.microsoft.com/fwlink/?LinkId=234236

namespace MicrosoftEdgeLegacyReborn.CustomUserControls
{
    public sealed partial class TabBar : UserControl
    {
        public TabBar()
        {
            this.InitializeComponent();
            if (RightContent == null)
            {
                RightContent = new Rectangle
                {
                    Name = "TitleBarDragRegion",
                    Fill = new SolidColorBrush(Colors.Transparent)
                };
                RightContentPresenter.Content = RightContent;
            }
            //Window.Current.SetTitleBar(TitleBarDragRegion);
        }

        private void PreviewButton_Click(object sender, RoutedEventArgs e)
        {
            IsTabsPreviewVisible = !IsTabsPreviewVisible;
        }

        #region "IsPreviewVisible" Propiedad que establece si es visible la preview de las pestañas.
        public bool IsTabsPreviewVisible
        {
            get { return (bool)GetValue(IsTabsPreviewVisibleProperty); }
            set { SetValue(IsTabsPreviewVisibleProperty, value); }
        }

        public static readonly DependencyProperty IsTabsPreviewVisibleProperty = DependencyProperty.Register("IsTabsPreviewVisible", typeof(bool), typeof(TabBar), new PropertyMetadata(false));
        #endregion

        #region "RightContent" Propiedad que establece si es visible la preview de las pestañas.
        public UIElement RightContent
        {
            get { return (UIElement)GetValue(RightContentProperty); }
            set {
                SetValue(RightContentProperty, value);
                RightContentPresenter.Content = value;
            }
        }

        public static readonly DependencyProperty RightContentProperty = DependencyProperty.Register("RightContent", typeof(UIElement), typeof(TabBar), new PropertyMetadata(null));
        #endregion
    }
}