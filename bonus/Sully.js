i = 5;
(function $(){
	path = require('path');
	var filename = path.basename(__filename);
	function strcmp(a, b) {
	    if (a.toString() < b.toString()) return -1;
	    if (a.toString() > b.toString()) return 1;
	    return 0;
	}
	if ((strcmp(filename, "Sully.js")))
		i--;
	var fs = require('fs');
	fs.writeFile("./Sully_"+i+".js","i = "+i+";\n("+$.toString()+")();\n" , function(err) {
	    if(err) {
	        return console.log(err);
	    }
		const exec = require('child_process').exec;
		if (i>0)
			exec('node ./Sully_'+i+'.js');
	    console.log("The file was saved!");
	})
})();
