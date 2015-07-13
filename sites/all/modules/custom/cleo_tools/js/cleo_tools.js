(function ($) {
/**
 * all js scripts for tools
 */
	Drupal.behaviors.cleo_tools = {
	  attach: function (context, settings) {
      $('input[name="cg_services[Other/Additional]"]').on('click', function(){
			if ( $('#edit-cg-services-otheradditional').is(':checked') ) {
				$('#other').show();
			} else {
				$('#other').hide();
			}
			});

})(jQuery);