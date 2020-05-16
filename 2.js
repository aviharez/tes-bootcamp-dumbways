function checkDuplicate(text) {
	var key = text.charAt(0);
    for(var i=1;i<text.length;i++){              
    	var isExist = key.search(text.charAt(i));
        isExist >=0 ?0:(key +=  text.charAt(i) ); 
    }
    return console.log(key); 
}

var text = "ccbabaccffpgkkklll"; 
checkDuplicate(text);