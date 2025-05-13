make 
mkdir -p $HOME/scripts
mv bin/cypher ~/scripts/cypher
echo 'alias cifr="$HOME/scripts/cypher"' >> ~/.bashrc
source ~/.bashrc
