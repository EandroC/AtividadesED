// Implementacao da classe SeqList
#include "SeqList.h"
#include <iostream>

    SeqList::SeqList(int n){
      capacity_vec = n;
      size_vec = 0;
    
       vec = new int[capacity_vec]; 
    }


    SeqList::~SeqList(){
      delete[] vec;
      std::cout<<"lista removida\n";
    
    }

    bool SeqList::add(int x){
        if(! isFull()){
           vec[size_vec]=x;
            size_vec++;
            return true;
        }else{
            return false;
            
        }
    }
    
    bool SeqList::remove(int x){
        int i = this->search(x);

        if(i==-1){
            return false;
        }else{
            for(int k = this->search(x);k<size();k++){
            vec[k]=vec[k+1];
            }
            size_vec--;
            return true;
        }
    } 
    
    int SeqList::search(int x){
        for(int i =0; i<size_vec;i++){
            if(vec[i]==x){
                return i;
            }
        }
        return -1;
    } 
    
    int SeqList::at(int k){
        if(k>=0 && k<size()){
            
            return vec[k];
    
        }else{
            return -999;
        }     
    }
    
    int SeqList::size(){
        
        return size_vec;
        
    }
    
    bool SeqList::isFull(){
        return size_vec==capacity_vec;
    }
    
    void SeqList::clear(){
        this->size_vec=0;
        
    } 

    std::string SeqList::toString(){
        std::string s= "[";
        
        for(int i =0;i<size();i++){
            s+= std::to_string(vec[i]);
            if(i==size()-1){
                break;
            }else{
                s+=",";
            }
            
         }

        return s + "]";
        
    }
    
    bool SeqList::replaceAt(int x, int k){
        if(k>=0&&k<=size_vec-1){
            vec[k]=x;
            return true;
        }
        
        return false;
    }

    bool SeqList::removeAt(int k){

        if(k >= 0 && k<= size()-1){
            for(int i=0;i<size_vec;i++){
                if(i==k){
                    for(int j=i;j<size_vec-1;j++){
                        vec[j]=vec[j+1];
                        
                    }
                    size_vec--;
                    return true;
                }
            }
        }else{
            return false;
        }
    }

    bool SeqList::insertAt(int x, int k){
        int i;
        
        if(0 <= k && k<= size()&& size()<capacity_vec){
            size_vec++;
            
            int i;
            
            for(i=size_vec;i>k;i--){
                vec[i]=vec[i-1];
            }
            
            vec[k]=x;
            
        }else{
            
            return false;
        }
        return true;
    }

    void SeqList::removeAll(int x){
        
        for(int i=0;i<size_vec;i++){
            if(vec[i]==x){
             for(int j=i;j<size_vec-1;j++){
                vec[j]=vec[j+1];
             }
            size_vec--;
            i--;
            }
        }
        
    }