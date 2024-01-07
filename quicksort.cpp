<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Portfolio</title>
  <link rel="stylesheet" type="text/css" href="style.css">
</head>

<body>
  <header>
    <nav>
      <ul>
        <li><a href="#home">Home</a></li>
        <li><a href="#about">About</a></li>
        <li><a href="#projects">Projects</a></li>
        <li><a href="#contact">Contact</a></li>
      </ul>
    </nav>
  </header>

  <section id="home">
    <h1>Welcome to My Portfolio</h1>
    <p>Here you can learn more about me and my projects.</p>
  </section>

  <section id="about">
    <h2>About Me</h2>
    <p>I am a passionate web developer with a strong focus on front-end development.</p>
  </section>

  <section id="projects">
    <h2>My Projects</h2>
    <ul>
      <li>Project 1</li>
      <li>Project 2</li>
      <li>Project 3</li>
    </ul>
  </section>

  <section id="contact">
    <h2>Contact Me</h2>
    <form action="/submit" method="post">
      <label for="name">Name:</label>
      <input type="text" id="name" name="name" required>
      <label for="email">Email:</label>
      <input type="email" id="email" name="email" required>
      <label for="message">Message:</label>
      <textarea id="message" name="message" required></textarea>
      <input type="submit" value="Submit">
    </form>
  </section>
  
  <script src="script.js"></script>
</body>

</html>
