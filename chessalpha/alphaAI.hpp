//
//  alphaAI.hpp
//  gobangGame
//
//  Created by Loyio Macbook on 2020/11/13.
//

#ifndef alphaAI_hpp
#define alphaAI_hpp

void AIwork(const int data[][15], int &x, int &y) {
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 15; j++)
            if (data[i][j] == 0) {
                x = i;
                y = j;
                return;
            }
}

#endif /* alphaAI_hpp */
