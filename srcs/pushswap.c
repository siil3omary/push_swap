/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:50:30 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 21:39:02 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void joinargs(char **av , int ac, s_var *var)
{
        char *tmp = NULL;
        char *old_avs = NULL;
        int i;
        i = 1;

        while (i <= ac - 1)
        {
            tmp = ft_strjoin(av[i] , " ");
            old_avs = var->avs;
            var->avs = ft_strjoin(var->avs, tmp);
            if (old_avs)
            free(old_avs);
            free(tmp);
            i++;
        }
        
        var->args = ft_split(var->avs , ' ');
}

void isdup(s_stack *stack)
{
    s_stack *temp = stack;
    while(temp)
    {
        s_stack *temp2 = temp->next;
        while(temp2)
        {
            if(temp->val == temp2->val)
                errornl();
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}
void initstack(s_var *var)
{
var->head_a = NULL;
var->head_b = NULL;
var->head_a = (s_stack *)malloc(sizeof(s_stack));
var->head_a->next = NULL;
var->head_a->size = 0;
var->head_b = (s_stack *)malloc(sizeof(s_stack));
var->head_b->next = NULL;
var->head_b->size = 0;
            int i = 0; 
        while(var->args[i])
        {
            int y = 0;
            while(var->args[i][y])
            {
                if(!ft_isdigit(var->args[i][y]))
                    errornl();
                y++;
            }
            ft_stackadd_back(&var->head_a, ft_stacknew(ft_atoi(var->args[i])));
            i++;
        }
}
void errornl(void)
{
    ft_putstr_fd("Error\n", 2);
    system("leaks a.out");
    exit(1);
}

void issorted(s_stack *stack)
{
    s_stack *temp = stack;
    while(temp->next)
    {
        if(temp->val > temp->next->val)
            return ;
        temp = temp->next;
    }
    exit(0);
}

int main(int ac , char **av)
{
    if(ac >= 2)
    {
        s_var *var;
        var = (s_var *)malloc(sizeof(s_var));
        joinargs(av , ac, var);
        initstack(var);
        isdup(var->head_a);
        issorted(var->head_a);
        s_stack * temp = var->head_a;
        printf("%d here last", temp->last->val );       
            while(temp)
            {
            printf("%d              \n", temp->val);

            temp = temp->next;
            }
        
    }
    return  0;
}
