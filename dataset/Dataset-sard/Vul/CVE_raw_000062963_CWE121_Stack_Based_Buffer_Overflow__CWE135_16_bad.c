void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (void *)VAR2;
        break;
    }
    while(1)
    {
        {
            
            size_t VAR3 = strlen((char *)VAR1);
            void * VAR4 = (void *)calloc(VAR3+1, 1);
            memcpy(VAR4, VAR1, (VAR3+1));
            FUN2((char *)VAR4);
            free(VAR4);
        }
        break;
    }
}