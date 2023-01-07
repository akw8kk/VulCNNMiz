static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    if(VAR2!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (void *)VAR3;
    }
    if(VAR2==5)
    {
        {
            
            size_t VAR4 = strlen((char *)VAR1);
            void * VAR5 = (void *)calloc(VAR4+1, 1);
            memcpy(VAR5, VAR1, (VAR4+1));
            FUN2((char *)VAR5);
            free(VAR5);
        }
    }
}