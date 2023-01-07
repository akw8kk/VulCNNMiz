void FUN1()
{
    if(FUN2())
    {
        {
            char VAR1[150], VAR2[100];
            int VAR3;
            
            memset(VAR1, '', 149);
            VAR1[149] = '';
            for(VAR3=0; VAR3 < 99; VAR3++)
            {
                VAR2[VAR3] = VAR1[VAR3];
            }
            
            FUN3(VAR2);
        }
    }
}