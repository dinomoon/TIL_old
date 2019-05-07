// 왜 a+1 하고 char를 해줄까??

public class Exercise33{
    public static void main(String[] args){
        char a = 'a';

        do{
            System.out.print(a);
            a += 1;
        } while(a<='z');

        // while문으로 변형해보자.
        System.out.println();
        a = 'a';
        while(a<='z'){
            System.out.print(a);
            a += 1;
        }

        // for문으로 변형해보자.
    }
}

// a = (char)(a+1) 이라고 하지 않고 a +=1 이라 해도 다음 문자로 넘어가는데?? 왜??? char???