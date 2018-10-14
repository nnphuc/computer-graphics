renderer = new THREE.WebGLRenderer({canvas : document.getElementById("glCanvas"), antialias: true, alpha: true}),
scene = new THREE.Scene(),
camera = new THREE.PerspectiveCamera( 75, window.innerWidth / window.innerHeight, 0.1, 1000 ),
controls = new THREE.OrbitControls( camera );

function animate() {
	requestAnimationFrame( animate );
	renderer.render( scene, camera );
}



