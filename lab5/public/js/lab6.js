function main() {
  drawTeapot();
  camera.position.z = 5;
  controls = new THREE.OrbitControls( camera );
  var light = new THREE.PointLight( 0xffffff , 1, 100 );
  light.position.set( 10, 10, 10 );
  scene.add( light );
  animate(); 
}

function drawTeapot() {
  var loader = new THREE.OBJLoader();
  loader.load("./data/teapot.obj", function(obj) {
//    var material = new THREE.MeshPhysicalMaterial( { color : 0xff00ff } );
    var material = new THREE.LineBasicMaterial( {
      color: 0xffffff,
      linewidth: 1
    } );
    obj.children[0].material = material
    console.log(obj);
    scene.add(obj); 
  });

}

$(main);
