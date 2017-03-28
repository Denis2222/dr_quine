(function $(){
var fs = require('fs');
fs.writeFile("./Grace_kid.c","("+$.toString()+")();\n" , function(err) {
    if(err) {
        return console.log(err);
    }
})})();
