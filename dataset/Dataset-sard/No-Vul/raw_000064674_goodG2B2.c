static void FUN1()
{
    int * VAR1;
    int VAR2[50];
    int VAR3[100];
    if(5==5)
    {
        
        VAR1 = VAR3;
    }
    {
        int VAR4[100] = {0}; 
        {
            size_t VAR5;
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR1[VAR5] = VAR4[VAR5];
            }
            FUN2(VAR1[0]);
        }
    }
}