using System;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Media;

namespace MicrosoftEdgeLegacyReborn
{
    /// <summary>
    /// Converts a Boolean value to a Visibility value.
    /// </summary>
    public class BooleanToVisibilityConverter : IValueConverter
    {
        /// <summary>
        /// Converts a <see cref="bool"/> to a <see cref="Visibility"/>.
        /// </summary>
        /// <param name="value">The boolean value to convert.</param>
        /// <param name="targetType">The target type of the conversion.</param>
        /// <param name="parameter">An optional parameter.</param>
        /// <param name="language">The language of the conversion.</param>
        /// <returns>
        /// Returns <see cref="Visibility.Visible"/> if <see langword="true"/>, otherwise returns <see cref="Visibility.Collapsed"/>.
        /// </returns>
        public object Convert(object value, Type targetType, object parameter, string language)
        {
            if ((bool)value)
            {
                return Visibility.Visible;
            }
            else
            {
                return Visibility.Collapsed;
            }
        }

        /// <summary>
        /// Converts back a <see cref="Visibility"/> value to a <see cref="bool"/>.
        /// </summary>
        /// <param name="value">The visibility value to convert.</param>
        /// <param name="targetType">The target type of the conversion.</param>
        /// <param name="parameter">An optional parameter used to indicate if the conversion should be reversed.</param>
        /// <param name="language">The language of the conversion.</param>
        /// <returns>
        /// Returns <see langword="true"/> if the visibility is <see cref="Visibility.Visible"/>; otherwise, returns <see langword="false"/>.
        /// If the parameter is "Reverse", the logic is inverted.
        /// </returns>
        public object ConvertBack(object value, Type targetType, object parameter, string language)
        {
            return (Visibility)value == Visibility.Visible ^ (parameter as string ?? string.Empty).Equals("Reverse");
        }
    }

    public class BooleanToStringSelectorConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, string language)
        {
            return (bool)value ? ((string)parameter).Split("|")[0] : (object)((string)parameter).Split("|")[1];
        }

        public object ConvertBack(object value, Type targetType, object parameter, string language)
        {
            throw new NotImplementedException();
        }
    }

    public class BooleanToColorSelecter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, string language)
        {
            return new SolidColorBrush(SharedFunctions.GetColorFromHex((bool)value ? ((string)parameter).Split("|")[0] : ((string)parameter).Split("|")[1]));
        }

        public object ConvertBack(object value, Type targetType, object parameter, string language)
        {
            throw new NotImplementedException();
        }
    }
}