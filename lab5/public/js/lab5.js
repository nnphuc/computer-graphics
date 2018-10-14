function main() {
  $.get("./data/dinosaur.dat", drawDino);
  camera.position.z = 5;

  animate(); 
}

function drawDino(data) {
  var dat = new Data(data);
  var material = new THREE.LineBasicMaterial({ color: 0xffffff});

  var lineCount = parseInt(dat.next());

  for (; lineCount > 0; lineCount--) {
    var lineLen = dat.next();
    var geometry = new THREE.Geometry();
    for (; lineLen > 0; lineLen--) {
      geometry.vertices.push(new THREE.Vector3(dat.next() / 500.0, dat.next() / 500.0, 0));
    }
    var line = new THREE.Line(geometry, material);
    scene.add( line );
  }
}

function Data(data) {
  this._dat = data.replace( /\n/g, " " ).split(" ");
  this._i = 0;
  this.next = function() {
    this._i++
    return this._dat[ this._i - 1 ];
  }
}



$(main);
