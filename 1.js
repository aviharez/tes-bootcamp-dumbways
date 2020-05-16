var regex = [/^[0-9]+$/, /^[^aeiou]+$/, /^[bcDF]+$/, /^[\r\n\t\f\s]+$/, /^[^AIUEO]+$/, /^[,.]+$/];

function validateString(text) {
	if (text.length != 6) {
    	return console.log('false');
    } else {
    	for (var i=0; i < text.length; i++) {
        	if (regex[i].test(text.charAt(i))) {
              	console.log(i);
            	return console.log('false');
              	break;
            }
        }
      	return console.log('true');
    }
}

validateString('think?');