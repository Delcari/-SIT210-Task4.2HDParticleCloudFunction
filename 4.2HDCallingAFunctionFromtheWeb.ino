int R = D0, Y = D1, G = D2;

int glow(String color)
{
    if (color == "red")
    {
        digitalWrite(R, HIGH);
        digitalWrite(Y, LOW);
        digitalWrite(G, LOW);
    }
    else if (color == "yellow")
    {
        digitalWrite(Y, HIGH);
        digitalWrite(R, LOW);
        digitalWrite(G, LOW);
    }
    else 
    {
        digitalWrite(G, HIGH);
        digitalWrite(R, LOW);
        digitalWrite(Y, LOW);
    }
    return 1;
}

void setup() {
    Particle.function("StreetLight", glow);
    pinMode(R, OUTPUT);
    pinMode(Y, OUTPUT);
    pinMode(G, OUTPUT);
}


void loop() {
}