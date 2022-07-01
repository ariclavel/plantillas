
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int stay = 0;
        ListNode *res=NULL;
        ListNode **s=&res;
        
       // ListNode* res=l1;
        //cout <<l1->val<<endl;
        while(l1!= NULL || l2 != NULL ){
            
            //cout <<l1->val<<endl;
            int temp = 0;
            if(l1 == NULL){
                temp = l2->val;
                
            }
            else if(l2 == NULL){ 
                temp = l1->val;
            }
            else{
                temp = l1->val+l2->val;
            }
           
            cout <<temp<<endl;
            if(stay != 0){
                temp = temp+stay;
                stay = 0;
            }
            if(temp >= 10){
                stay = temp/10;
                temp = temp - (stay*10);
                  
            }
            //ut <<temp<<endl;
           
            //res = res->next;
            if(l1 == NULL){
                l2 = l2->next;
                
            }
            else if(l2 == NULL){ 
                l1 = l1->next;
            }
            else{
                l1 = l1->next;
                l2 = l2->next;
                
            }
            
        
            
           (*s)= new ListNode(temp);
            s = &((*s)->next);
            
            
        } 
        if(stay > 0){
            (*s)= new ListNode(stay);
        }
        //ultimo ciclo normal
        /*t temp = l1->val+l2->val;
        
        if(stay != 0){
            temp = temp+stay;
            stay = 0;
        }
        //cout <<temp<<endl;
        if(temp >= 10){
            stay = temp/10;
            temp = temp - (stay*10);
        }
        //cout <<temp<<endl;
        (*s)= new ListNode(temp);
        s = &((*s)->next);
      
           */
        
        return res;
        
    }
};
