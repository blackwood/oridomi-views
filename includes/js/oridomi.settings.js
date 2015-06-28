/**
 * @file
 * Initiate OriDomi.js.
 */

(function($) {

  Drupal.behaviors.oridomi = {
    attach: function(context, settings) {

      for (var parent in settings.oridomi) {
        // Parent instance.
        var par = $('#' + parent).attr('id');

        var selectorString = '#' + par;

        // Attach instance settings.
        var folded = new OriDomi(selectorString,settings.oridomi[parent].settings);

      }
    }
  };

}(jQuery));
