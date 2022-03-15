#include <iostream>
#include <string>

using namespace std;

bool is_game_running = false;

class GameObject
{
public:
    GameObject()
    {
        cout << "게임 오브젝트 생성! \n";
    }
    virtual ~GameObject()
    {
        cout << "게임 오브젝트 소멸!\n";
    }
    virtual void Start()
    {}
    virtual void Update()
    {}
};

class Player : public GameObject
{
public:
    int HP = 100;

    Player() 
    {
        cout << "허윤빈 생성!!!\n";
    }
    ~Player()
    {
        cout << "허윤빈 소멸!!!\n";
    }
    void Start()
    {
        cout << "허윤빈의 HP는" << HP << "입니다!\n";
    }
    void Update()
    {
        cout << "허윤빈 업데이트!!!\n";
    }
};

class Enemy : public GameObject
{   
public:
    int HP = 100;

    Enemy()
    {
        cout << "윤보상 생성!!!\n";
    }
    ~Enemy()
    {
        cout << "윤보상 소멸!!!\n";
    }
    void Start()
    {
        cout << "윤보상의 HP는" << HP <<"입니다!\n";
    }
    void Update()
    {
        cout << "윤보상 업데이트!!!\n";
    }
};

void main()
{   
    is_game_running = true;

    GameObject* p = new Player();
    GameObject* e = new Enemy();

    p->Start();
    e->Start();

    GameObject *Player = new GameObject();
    
    Player -> Start();

    while (is_game_running)
    {   
        Player -> Update();
        cout << "입력해주세요 (1:게임종료 , 2: 게임 계속): ";
        int input;
        cin >> input;
        if(input == 1) 
            is_game_running = false;
    }

    delete(p);
    delete(e);

}
