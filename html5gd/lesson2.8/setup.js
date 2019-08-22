


var canvas = null;
var ctx = null;
var frameRate = 1000 / 30;
var frame = 0;
var assets = ['robowalk00.png',
              'robowalk01.png',
              'robowalk02.png',
              'robowalk03.png',
              'robowalk04.png',
              'robowalk05.png',
              'robowalk06.png',
              'robowalk07.png',
              'robowalk08.png',
              'robowalk09.png',
              'robowalk10.png',
              'robowalk11.png',
              'robowalk12.png',
              'robowalk13.png',
              'robowalk14.png',
              'robowalk15.png',
              'robowalk16.png',
              'robowalk17.png',
              'robowalk18.png'
             ];
var frames = [];

var onImageLoad = function(){
    console.log("IMAGE!!!");
console.log(frame);
    ++frame;
    if (frame == frames.length) {
      frame = 0;
      setInterval(animate, frameRate);
    }
};

var setup = function() {
    body = document.getElementById('body');
    canvas = document.createElement('canvas');

    ctx = canvas.getContext('2d');
    
    canvas.width = window.innerWidth;
    canvas.height = window.innerHeight;

    body.appendChild(canvas);

    // Load each image URL from the assets array into the frames array 
    // in the correct order.
    // Afterwards, call setInterval to run at a framerate of 30 frames 
    // per second, calling the animate function each time.
    // YOUR CODE HERE
    assets.forEach(function(src, index) {
      frames[index] = new Image();
      frames[index].src = src;
      frames[index].onload = onImageLoad
    });

    console.log('setup');
};

var animate = function(){
    // Draw each frame in order, looping back around to the 
    // beginning of the animation once you reach the end.
    // Draw each frame at a position of (0,0) on the canvas.
  
    // Try your code with this call to clearRect commented out
    // and uncommented to see what happens!
    //
    ctx.clearRect(0,0,canvas.width, canvas.height);
  
    // YOUR CODE HERE
    ctx.drawImage(frames[frame], 0, 0);
    ++frame;
    if (frame == frames.length) frame = 0;
    // frame = (frame + 1) % frames.length;
};

// We'll call your setup function in our test code, so
// don't call it in your code.
setup();

