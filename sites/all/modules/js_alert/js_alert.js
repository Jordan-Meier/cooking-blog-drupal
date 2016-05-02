jQuery(document).ready(function($) {
    var ref = new Firebase('https://super-rentals-jatp.firebaseio.com');

    $('#js_alert').click(function() {
        ref.once("value", function(snapshot) {
            console.log(snapshot.val());
        });
    });
});
