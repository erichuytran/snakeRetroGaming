# 1 "d:\\dev\\IPI\\RetroGamaing\\arduino\\portable\\sketchbook\\snake\\snake.ino"
# 1 "d:\\dev\\IPI\\RetroGamaing\\arduino\\portable\\sketchbook\\snake\\snake.ino"
# 2 "d:\\dev\\IPI\\RetroGamaing\\arduino\\portable\\sketchbook\\snake\\snake.ino" 2

int SnakeBody_posX = 20;
int SnakeBody_posY = 20;

int SnakeHead_posX = 20;
int SnakeHead_posY = 20;
int Snake_speedX = 1;
int Snake_speedY = 0;
int SnakeSize = 2;
int nombre = 1;
int tab[600][2] = {{20,20},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};

int ApplePosX = 40;
int ApplePosY = 40;
int AppleSize = 2;
int Score = 0;

bool gameIsOver = true;

void gameOver()
{
    gb.display.print("Game Over !");
    while (gameIsOver) {
        if (gb.buttons.pressed(BUTTON_UP))
        {
            gameIsOver = false;
        }

    }
}

void changeApple()
{
    int AppleMarginBorders = 15; //ajustement de la distance de génération des pommes par rapport aux bordures
    // Get random X coordinates
    ApplePosX = rand() % (gb.display.width() - 1 - AppleMarginBorders) + AppleMarginBorders;
    // Get random Y coordinates
    ApplePosY = rand() % (gb.display.height() - 1 - AppleMarginBorders) + AppleMarginBorders;
}

void setup()
{
    gb.begin();
    gb.setFrameRate(60);
}

void loop()
{
    while (!gb.update());
    gb.display.clear();

    if (gb.buttons.repeat(BUTTON_UP, 0))
    {
        Snake_speedY = -1;
        Snake_speedX = 0;
    }
    if (gb.buttons.repeat(BUTTON_DOWN, 0))
    {
        Snake_speedY = 1;
        Snake_speedX = 0;
    }
    if (gb.buttons.repeat(BUTTON_LEFT, 0))
    {
        Snake_speedX = -1;
        Snake_speedY = 0;
    }
    if (gb.buttons.repeat(BUTTON_RIGHT, 0))
    {
        Snake_speedX = 1;
        Snake_speedY = 0;
    }

    if (gb.collide.rectRect(ApplePosX, ApplePosY, AppleSize, AppleSize, SnakeHead_posX, SnakeHead_posY,SnakeSize, SnakeSize))
    {
        changeApple();
        Score++;
        nombre = nombre + 3;
    }

    // collisions murs
    if (SnakeHead_posY < 0) {
       gameOver();
    }

    if (SnakeHead_posY > gb.display.height() - SnakeSize) {
        gameOver();
    }

    if (SnakeHead_posX < 0) {
        gameOver();
    }

    if (SnakeHead_posX > gb.display.width() - SnakeSize) {
        gameOver();
    }


    for (int i = nombre; i > -1; i--)
    {

        if (tab[i][1] == 0 && tab[i][2] == 0)
        {
          int u = i - 1;
          SnakeBody_posX = tab[u][1];
          SnakeBody_posY = tab[u][2];
          tab[i][1] = SnakeBody_posX;
          tab[i][2] = SnakeBody_posY;
          gb.display.fillRect(SnakeBody_posX, SnakeBody_posY, SnakeSize, SnakeSize);
        }
        else
        {
            if (i == 0)
            {
                SnakeHead_posX = SnakeHead_posX + Snake_speedX;
                SnakeHead_posY = SnakeHead_posY + Snake_speedY;
                tab[0][1] = SnakeHead_posX;
                tab[0][2] = SnakeHead_posY;
                gb.display.fillRect(SnakeHead_posX, SnakeHead_posY, SnakeSize, SnakeSize);
            }
            else
            {
                int u = i - 1;
                SnakeBody_posX = tab[u][1];
                SnakeBody_posY = tab[u][2];
                tab[i][1] = SnakeBody_posX;
                tab[i][2] = SnakeBody_posY;
                gb.display.fillRect(SnakeBody_posX, SnakeBody_posY, SnakeSize, SnakeSize);
            }
        }
        if (i > 1 && SnakeHead_posX == tab[i][1] && SnakeHead_posY == tab[i][2])
        {
         gameOver();
        }
    }

    // Affichage de la pomme
    gb.display.setColor(GREEN);
    gb.display.fillRect(ApplePosX, ApplePosY, AppleSize, AppleSize);

    // Affichage du Score
    gb.display.setCursor(35, 5);
    gb.display.print(Score);
}
