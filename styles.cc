* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: 'Poppins', sans-serif;
  background-color: #f5f5f5;
  color: #333333;
}

nav {
  background-color: #ffffff;
  padding: 16px 40px;
  display: flex;
  justify-content: space-between;
  align-items: center;
  border-bottom: 2px solid #eeeeee;
  position: sticky;
  top: 0;
}

nav h1 {
  font-size: 20px;
  font-weight: 600;
  color: #222222;
}

nav ul {
  list-style: none;
  display: flex;
  gap: 28px;
}

nav ul a {
  text-decoration: none;
  color: #555555;
  font-size: 14px;
}

nav ul a:hover {
  color: #2d6a4f;
}

#hero {
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 80px 40px;
  gap: 40px;
}

#hero p:first-child {
  font-size: 13px;
  color: #2d6a4f;
  font-weight: 600;
  letter-spacing: 1px;
  margin-bottom: 12px;
}

#hero h2 {
  font-size: 42px;
  font-weight: 600;
  color: #222222;
  margin-bottom: 16px;
}

#hero h2 span {
  color: #2d6a4f;
}

#hero p {
  font-size: 15px;
  color: #666666;
  max-width: 460px;
  line-height: 1.7;
  margin-bottom: 28px;
}

#hero a:first-of-type {
  background-color: #2d6a4f;
  color: #ffffff;
  padding: 12px 24px;
  border-radius: 6px;
  text-decoration: none;
  font-size: 14px;
  margin-right: 12px;
}

#hero a:last-of-type {
  border: 1px solid #cccccc;
  color: #444444;
  padding: 12px 24px;
  border-radius: 6px;
  text-decoration: none;
  font-size: 14px;
}

.hero-photo img {
  width: 280px;
  height: 340px;
  object-fit: cover;
  border-radius: 12px;
}

#skills {
  padding: 80px 40px;
  background-color: #ffffff;
}

#skills h2 {
  font-size: 28px;
  font-weight: 600;
  color: #222222;
  margin-bottom: 40px;
  text-align: center;
}

.skills-container {
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
  gap: 24px;
}

.skill-card {
  background-color: #f9f9f9;
  border: 1px solid #eeeeee;
  border-radius: 12px;
  padding: 24px;
  width: 160px;
  text-align: center;
}

.skill-card:hover {
  border-color: #2d6a4f;
  transform: translateY(-4px);
}

.skill-card img {
  width: 48px;
  height: 48px;
  margin-bottom: 12px;
}

.skill-card h3 {
  font-size: 14px;
  font-weight: 600;
  color: #222222;
  margin-bottom: 8px;
}

.skill-card p {
  font-size: 12px;
  color: #888888;
  line-height: 1.5;
}

#projects {
  padding: 80px 40px;
  background-color: #f5f5f5;
}

#projects h2 {
  font-size: 28px;
  font-weight: 600;
  color: #222222;
  margin-bottom: 40px;
  text-align: center;
}

.projects-container {
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
  gap: 24px;
}

.project-card {
  background-color: #ffffff;
  border: 1px solid #eeeeee;
  border-radius: 12px;
  padding: 28px;
  width: 300px;
}

.project-card:hover {
  border-color: #2d6a4f;
  transform: translateY(-4px);
}

.project-card h3 {
  font-size: 18px;
  font-weight: 600;
  color: #222222;
  margin-bottom: 12px;
}

.project-card p {
  font-size: 13px;
  color: #666666;
  line-height: 1.7;
  margin-bottom: 16px;
}

.project-tags {
  display: flex;
  flex-wrap: wrap;
  gap: 8px;
  margin-bottom: 20px;
}

.project-tags span {
  background-color: #eaf4ef;
  color: #2d6a4f;
  font-size: 11px;
  font-weight: 600;
  padding: 4px 10px;
  border-radius: 20px;
}

.project-card a {
  text-decoration: none;
  color: #2d6a4f;
  font-size: 13px;
  font-weight: 600;
}

.project-card a:hover {
  text-decoration: underline;
}

#about {
  padding: 80px 40px;
  background-color: #ffffff;
}

#about h2 {
  font-size: 28px;
  font-weight: 600;
  color: #222222;
  margin-bottom: 40px;
  text-align: center;
}

.about-container {
  display: flex;
  align-items: center;
  gap: 60px;
  max-width: 900px;
  margin: 0 auto;
}

.about-photo img {
  width: 260px;
  height: 320px;
  object-fit: cover;
  border-radius: 12px;
}

.about-text p {
  font-size: 14px;
  color: #666666;
  line-height: 1.8;
  margin-bottom: 16px;
}

.about-info {
  margin-top: 24px;
  border-top: 1px solid #eeeeee;
  padding-top: 24px;
}

.about-info p {
  font-size: 13px;
  color: #666666;
  margin-bottom: 8px;
}

.about-info strong {
  color: #222222;
}

#contact {
  padding: 80px 40px;
  background-color: #f5f5f5;
  text-align: center;
}

#contact h2 {
  font-size: 28px;
  font-weight: 600;
  color: #222222;
  margin-bottom: 16px;
}

#contact p {
  font-size: 14px;
  color: #666666;
  margin-bottom: 40px;
  max-width: 480px;
  margin-left: auto;
  margin-right: auto;
  line-height: 1.7;
}

.contact-links {
  display: flex;
  justify-content: center;
  flex-wrap: wrap;
  gap: 16px;
}

.contact-links a {
  background-color: #ffffff;
  border: 1px solid #eeeeee;
  color: #444444;
  text-decoration: none;
  padding: 12px 24px;
  border-radius: 8px;
  font-size: 14px;
  font-weight: 500;
}

.contact-links a:hover {
  border-color: #2d6a4f;
  color: #2d6a4f;
}

footer {
  background-color: #222222;
  color: #aaaaaa;
  text-align: center;
  padding: 24px 40px;
  font-size: 13px;
}
