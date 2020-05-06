use std::io;

fn main() {
    let input = input_number();
    let r = input[0] as usize;
    let c = input[1] as usize;
    let mut rc: Vec<Vec<i64>> = vec![];
    for _ in 0..r {
        rc.push(input_number());
    }

    for i in 0..r {
        for j in 0..c {
            print!("{} ", rc[i][j]);
            if j == c - 1 {
                let sum = rc[i].iter().fold(0, |sum, j| sum + j);
                print!("{}", sum);
            }
        }
        println!("");
    }
    let mut allsum = 0;
    for i in 0..c {
        let sum = (0..r).fold(0, |sum, j| sum + rc[j][i]);
        allsum += sum;
        print!("{} ", sum);
    }
    print!("{}", allsum);
    println!("");
}

#[allow(dead_code)]
fn input_number() -> Vec<i64> {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    let vec: Vec<i64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap_or(0))
        .collect();
    vec
}

#[allow(dead_code)]
fn input() -> (char, usize) {
    let mut s = String::new();
    io::stdin().read_line(&mut s).expect("");
    let mut iter = s.trim().split_whitespace();
    let c: char = iter.next().unwrap().chars().nth(0).unwrap();
    let n: usize = iter.next().unwrap().parse().unwrap();
    (c, n)
}
