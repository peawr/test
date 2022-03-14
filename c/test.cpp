#include <iostream>
#include <string>

using namespace std;



class data
{
public:
    data(string name, int height, int weight, string favor):name(name),favor(favor)
    {
        int n = 20;

        this->height = new int[n];
        this->weight = new int[n];

        this->height[0] = height;
        this->weight[0] = weight;

        count++;
    }

    void insert
    {
        this->height[count] = height;
        this->weight[count] = weight;

        count++;
    }

    void find(string name, int height, int weight, string favor)
    {
        if(name && height && weight && favor)
        {
            cout<<"input error!"<<endl;
            return;
        }
        for(int i=0; i<count-1; i++)
        {
            if(this->name[i]==name || this->height[i]==height || this->weight[i]==weight || this->favor[i]==favor)
            {
                cout<<"data exist"<<endl
                cout<<this->name[i]<<" "<<this->height[i]<<this->weight[i]<<" "<<this->favor[i]<<endl;
                break;
            }
        }
    }

    void change(string name, int height, int weight, string favor, int status)
    {
        if(status)
        {
            for(int i=0; i<count-1; i++)
            {
                if(this->name[i]==name || this->height[i]==height || this->weight[i]==weight || this->favor[i]==favor)
                {
                    this->name[i]=name ;
                    this->height[i]=height;
                    this->weight[i]=weight;
                    this->favor[i]=favor;
                }
            }
        }
    }

    ~data()
    {
        delete this->name;
        delete this->height;
        delete this->weight;
        delete this->favor;
    }

private:
    int count = 0;

    struct data1
    {
        string name;
        int *height;
        int *weight;
        string flavor;
    };

};



int main()
{
    data1 da = new data1;

    
}
